/*************************************************************************
                           LoadCommand  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <LoadCommand> (file LoadCommand.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

//------------------------------------------------------- Personal include
#include "Interpreter.h"
#include "LoadCommand.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type LoadCommand::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
LoadCommand::LoadCommand ( Drawing & rDrawing, string const & rParameters )
: Command( rDrawing, false ), mInFile( rParameters.c_str( ) ), mFigures( " " )
{
	bool error = !mInFile.good( );
	if ( !mError && error )
	{
		mError = true;
		mErrorMessage = "File \"" + rParameters + "\" could not be opened";
	}

	while ( mInFile.good( ) )
	{
		string code, parameters;
		mInFile >> code;
		mInFile >> ws;
		getline( mInFile, parameters, Interpreter::ENDL );
		Command *pCommand = Interpreter::GetInstance( )
							.GetCommand( code, parameters );

		if ( !pCommand->isValid( ) )
		{
			handleError( pCommand );
			break;
		}
		else
		{
			pCommand->Do( );
			mCommands.push_back( pCommand );
			mInFile >> ws;
		}
	}

	for ( vector<Command *>::iterator it = mCommands.begin( );
		  it != mCommands.end( );
		  ++it )
	{
		( *it )->Undo( );
	}

#ifdef DEBUG
	cout << "# Calling constructor of <LoadCommand>" << endl;
#endif
} //----- End of LoadCommand


LoadCommand::~LoadCommand ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "# Calling destructor of <LoadCommand>" << endl;
#endif
	for ( std::vector<Command *>::iterator it = mCommands.begin( );
		 it != mCommands.end( );
		 ++it )
	{
		delete *it;
	}
	mCommands.clear( );
} //----- End of ~LoadCommand


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods
/*virtual*/ void LoadCommand::execute ( )
{
	for ( std::vector<Command *>::iterator it = mCommands.begin( );
		 it != mCommands.end( );
		 ++it )
	{
		( *it )->Do( );
	}
} //----- End of execute


/*virtual*/ void LoadCommand::cancel ( )
{
	for ( std::vector<Command *>::iterator it = mCommands.begin( );
		 it != mCommands.end( );
		 ++it )
	{
		( *it )->Undo( );
	}
} //----- End of cancel


void LoadCommand::handleError ( Command * pCommand )
{
	if ( !mError )
	{
		this->mError = true;
		mErrorMessage = string( "LOAD: " ) + pCommand->ErrorMessage( );
	}
#ifdef DEBUG
	cout << "# Load command will be aborted" << endl;
#endif
	for ( std::vector<Command *>::iterator it = mCommands.begin( );
		  it != mCommands.end( );
		  ++it )
	{
		delete *it;
	}
	mCommands.clear( );
#ifdef DEBUG
	cout << "# Commands Deleted." << endl;
#endif
} //----- End of handleError

