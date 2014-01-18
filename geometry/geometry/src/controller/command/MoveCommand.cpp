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


/*virtual*/ void MoveCommand::Execute ( )
{
	mpFigure->Move( mVector );
} //----- End of Execute


/*virtual*/ void MoveCommand::Undo ( )
{
	mpFigure->Move( -mVector );
} //----- End of Undo


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
MoveCommand::MoveCommand ( Drawing & rDrawing, string const & rParameters )
: Command( rDrawing, false ), mVector( 0, 0 )
{
	istringstream iss( rParameters );
	string figureName;
	iss >> figureName;
	mpFigure = mrDrawing.FindFigure( figureName );
	bool error = 0 == mpFigure;
	if ( !mError && error )
	{
		mError = true;
		mErrorMessage = "Figure \"" + figureName + "\" doesn't exist";
	}
	else
	{
		iss >> mVector.x;
		iss >> mVector.y;
		// TODO check parsing
		error = iss.fail( );
		if ( !mError && error )
		{
			mError = true;
			mErrorMessage = "Impossible to parse coordinates of vector";
		}
	}

#ifdef DEBUG
	cout << "Calling constructor of <MoveCommand>" << endl;
#endif
} //----- End of MoveCommand


MoveCommand::~MoveCommand ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling destructor of <MoveCommand>" << endl;
#endif
} //----- End of ~MoveCommand


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

