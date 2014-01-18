/*************************************************************************
                           ClearCommand  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <ClearCommand> (file ClearCommand.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
#include <sstream>
using namespace std;

//------------------------------------------------------- Personal include
#include "ClearCommand.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type ClearCommand::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


/*virtual*/ void ClearCommand::Execute ( )
{
	// TODO
} //----- End of Execute


/*virtual*/ void ClearCommand::Undo ( )
{
	// TODO
} //----- End of Undo


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
ClearCommand::ClearCommand ( Drawing & rDrawing, string const & rParameters )
: Command ( rDrawing, false ), mParameters( rParameters )
{
	bool error = ( "" == rParameters ); // TODO accept whitespaces
	if ( !mError && error )
	{
		mError = true;
		mErrorMessage = "CLEAR takes no parameter";
	}

#ifdef DEBUG
	cout << "Calling constructor of <ClearCommand>" << endl;
#endif
} //----- End of ClearCommand


ClearCommand::~ClearCommand ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling destructor of <ClearCommand>" << endl;
#endif
} //----- End of ~ClearCommand


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

