/*************************************************************************
                           DeleteCommand  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <DeleteCommand> (file DeleteCommand.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
#include <sstream>
using namespace std;

//------------------------------------------------------- Personal include
#include "DeleteCommand.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type DeleteCommand::Method( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


/*virtual*/ void DeleteCommand::Execute ( )
{
	mrDrawing.RemoveFigure( "" );
} //----- End of Execute


/*virtual*/ void DeleteCommand::Undo ( )
{
	// TODO
} //----- End of Undo


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
DeleteCommand::DeleteCommand ( Drawing & rDrawing, string const & rParameters )
: Command( rDrawing, false )
{
	stringstream ss( rParameters );
	bool error = true;
	while ( ss.good( ) )
	{
		string figureName;
		ss >> figureName;
		error = 0 == mrDrawing.FindFigure( figureName );
		if ( !mError && error )
		{
			mError = true;
			mErrorMessage = "Figure \"" + figureName + "\" doesn't exist";
			break;
		}
		mDeleteList.push_back(figureName);
	}

#ifdef DEBUG
	cout << "Calling constructor of <DeleteCommand>" << endl;
#endif
} //----- End of DeleteCommand


DeleteCommand::~DeleteCommand( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling destructor of <DeleteCommand>" << endl;
#endif
} //----- End of ~DeleteCommand


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

