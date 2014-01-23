/*************************************************************************
                           MoveCommand  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <MoveCommand> (file MoveCommand.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
#include <sstream>
using namespace std;

//------------------------------------------------------- Personal include
#include "MoveCommand.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type MoveCommand::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
MoveCommand::MoveCommand ( Drawing & rDrawing, string const & rParameters )
: Command( rDrawing, false ), mVector( 0, 0 )
{
	istringstream iss( rParameters );
	iss >> mFigureName;
	bool error = !mrDrawing.FigureExists( mFigureName );
	if ( !mError && error )
	{
		mError = true;
		mErrorMessage = "Figure \"" + mFigureName + "\" doesn't exist";
	}
	else
	{
		iss >> mVector.x;
		iss >> mVector.y;

		error = iss.fail( );
		if ( !mError && error )
		{
			mError = true;
			mErrorMessage = "Impossible to parse coordinates of vector";
		}
	}

#ifdef DEBUG
	cout << "# Calling constructor of <MoveCommand>" << endl;
#endif
} //----- End of MoveCommand


MoveCommand::~MoveCommand ( )
{
#ifdef DEBUG
	cout << "# Calling destructor of <MoveCommand>" << endl;
#endif
} //----- End of ~MoveCommand


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods
/*virtual*/ void MoveCommand::execute ( )
{
	mrDrawing.MoveFigure( mFigureName, mVector );
} //----- End of Execute


/*virtual*/ void MoveCommand::cancel ( )
{
	mrDrawing.MoveFigure( mFigureName, -mVector );
} //----- End of Undo

