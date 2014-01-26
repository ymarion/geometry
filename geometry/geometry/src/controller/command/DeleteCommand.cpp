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
		error = !mrDrawing.FigureExists( figureName );
		if ( !mError && error )
		{
			mError = true;
			mErrorMessage = "Figure \"" + figureName + "\" doesn't exist";
			break;
		}
		mDeleteList.push_back( mrDrawing.GetFigure( figureName ) );
	}

#ifdef DEBUG
	cout << "# Calling constructor of <DeleteCommand>" << endl;
#endif
} //----- End of DeleteCommand


DeleteCommand::~DeleteCommand( )
{
	if ( mWasExecuted )
	{
		for ( DeleteList::iterator it = mDeleteList.begin( );
			  it != mDeleteList.end( );
			  ++it )
		{
			mrDrawing.DeleteFigure( ( *it )->GetName( ) );
		}
	}
#ifdef DEBUG
	cout << "# Calling destructor of <DeleteCommand>" << endl;
#endif
} //----- End of ~DeleteCommand


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods
/*virtual*/ void DeleteCommand::execute ( )
{
	for ( DeleteList::iterator it = mDeleteList.begin( );
		  it != mDeleteList.end( );
		 ++it )
	{
		mrDrawing.IgnoreFigure( ( *it )->GetName( ) );
	}
} //----- End of execute


/*virtual*/ void DeleteCommand::cancel ( )
{
	for ( DeleteList::iterator it = mDeleteList.begin( );
		  it != mDeleteList.end( );
		  ++it )
	{
		bool acknowledged = mrDrawing.AcknowledgeFigure( ( *it )->GetName( ) );
		if ( !acknowledged )
		{
			cout << "FATAL ERROR: could not undo DELETE." << endl;
		}
	}
} //----- End of cancel

