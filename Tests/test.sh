echo "-----------------------------------------------------------"

execDir=`pwd`

if [ "$1" = "" ]
then
  echo "No directory given, default to current"
  Directory="."
else  
  echo "| Test id : $1"
  if [ -d "$1" ]
  then 
     Directory="$1"
  else
     echo "$1 is not a directory. Exiting."
     exit 2
  fi
fi

cd $Directory

if [ -r "description" ]
then 
  echo "-----------------------------------------------------------"
  echo "Description :"
  cat description
  echo "-----------------------------------------------------------"
fi

nTestCount=0
nSuccesfulTests=0
nStrResult="$1 "

if [ -r "run" ]
then
  sRun=`cat run`
else
  echo "No run file found. Exiting."
  exit 2
fi

# stdin has been specified
if [ -r "std.in" ]
then
  # removes comments
  grep -v '^#' "std.in" > "temp.in"
  sRun="$sRun <temp.in"
fi

# stdout has been specified
if [ -r "std.out" ]
then 
  sRun="$sRun >temp.out.comments"
fi

# stderr has been specified
if [ -r "stderr.out" ]
then 
  sRun="$sRun 2>temp.err.comments"
  # removes comments
  grep -v '^#' "temp.err.comments" > "temp.err"
  rm "temp.err.comments"
fi

echo $sRun
# execute the command line
eval $sRun
returnCode=$?
# Removes temp file
rm temp.in

resultGlobal=1

# compare return code if concerned
resultRC="Not tested"
if [ -r "returncode" ]
then 
  if [ "$returnCode" = `cat returncode` ]
  then
    echo "                                       Return Code : PASSED"
    resultRC="Passed"
  else
    echo "                                       Return Code : FAILED"
    resultRC="Failed"
    resultGlobal=0
  fi
fi

# compare stdout if concerned
resultOut="Not tested"
if [ -r "std.out" ]
then 
  # removes comments
  grep -v '^#' "temp.out.comments" > "temp.out"
  rm temp.out.comments

#  diff -wB temp.out std.out >/dev/null
# Do NOT ignore whitespaces and blank lines
  diff temp.out std.out >/dev/null
  if [ $? -eq 0 ]
  then
    echo "                                       Stdout      : PASSED"
    resultOut="Passed"
  else
    echo "                                       Stdout      : FAILED"
    resultOut="Failed"
    resultGlobal=0
  fi
  # clean temporary out file
  rm temp.out
fi

# compare stderr if concerned
resultErr="Not tested"
if [ -r "stderr.out" ]
then 
#  diff -wB temp.err stderr.out >/dev/null
# Do NOT ignore whitespaces and blank lines
  diff temp.err stderr.out >/dev/null
  if [ $? -eq 0 ]
  then
    echo "                                       Stderr      : PASSED"
    resultErr="Passed"
  else
    echo "                                       Stderr      : FAILED"
    resultErr="Failed"
    resultGlobal=0
  fi
  # clean temporary out file
  rm temp.err
fi

# compare files created if concerned
resultFiles="Not tested"
if ls *.outfile &> /dev/null
then
  number=1
  for i in *.outfile
  do
    fileName=`basename $i .outfile`
    if [ -r $fileName ]
    then
#      diff -wB $i $fileName
# Do NOT ignore whitespaces and blank lines
      diff $i $fileName
      if [ $? -eq 0 ]
      then
        echo "                                       File #$number     : PASSED"
      else
        echo "                                       File #$number     : FAILED"
        resultFiles="Failed"
        resultGlobal=0
      fi  
      rm $fileName
    else  
      echo "                                       File #$number     : FAILED"
      resultFiles="Failed"
      resultGlobal=0
    fi
    let "number=$number+1"
  done
  if [ $resultFiles -eq 2 ]
  then
    resultFiles="Passed"
  fi
fi

echo "                                       --------------------"
if [ $resultGlobal -eq 0 ]
then
  echo "                                       Global      : FAILED"
else
  echo "                                       Global      : PASSED"
fi
echo "-----------------------------------------------------------"
echo 

cd $execDir

# log result in $2 if filename provided
if [ "$2" != "" ]
then
  if [ ! -w "$2" ]
  then
    touch $2
  fi
  if [ -w "$2" ]
  then
    echo "$Directory;$resultRC;$resultOut;$resultErr;$resultFiles;$resultGlobal" >>$2
  fi
fi

exit $resultGlobal


