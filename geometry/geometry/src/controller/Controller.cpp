/*************************************************************************
                           Controller  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <Controller> (file Controller.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "Controller.h"

//-------------------------------------------------------- Class constants
int const Controller::MAX_UNDO_REDOS = 50;

//-------------------------------------------------------- Class variables
Controller Controller::instance = Controller( );
// Initialization of the singleton

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type Controller::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


/* static */ Controller & Controller::GetInstance ( ostream & rStream )
{
	return Controller::instance;
} //----- End of GetInstance


void Controller::SaveAndExecute( Command * pCommand )
{
	if ( !pCommand->isValid( ) )
	{
		handleError( pCommand );
		return;
	}

	if ( mCommands.size( ) >= MAX_UNDO_REDOS )
	{
		deleteOldestCommand( );
	}

	saveCommand( pCommand );
	// Saves the command and forgets about the next ones

	pCommand->Do( );

} //----- End of SaveAndExecute


void Controller::DeInit ( )
{
#ifdef DEBUG
	mOutput << "# Emptying command list" << endl;
#endif
	while ( !mCommands.empty( ) )
	{
		delete *( mCommands.begin( ) );
		*( mCommands.begin( ) ) = 0;
		mCommands.pop_front( );
	}
#ifdef DEBUG
	mOutput << "# Emptied list" << endl;
#endif
} //----- End of DeInit


void Controller::PrintList ( bool alphabetical, ostream & rOutput )
{
	Drawing::GetInstance( ).PrintList( rOutput, alphabetical );
} //----- End of PrintList

bool Controller::Undo ( )
{
	if ( mAfterLastExecuted != mCommands.begin( ) )
	{
#ifdef DEBUG
		cout << "# Undoing command" << endl;
#endif
		--mAfterLastExecuted; // Moves to the last executed

		( *mAfterLastExecuted )->Undo( );
		// Now pointing AFTER the last executed

		return true;
    }
	else
	// The first command is AFTER the last executed => nothing to undo
    {
		cout << "# End of undo list. Cannot undo more" << endl;
		return false;
	}

} //----- End of Undo


bool Controller::Redo ( )
{
	if( mAfterLastExecuted != mCommands.end( ) )
	{
#ifdef DEBUG
		mOutput << "# Redoing command" << endl;
#endif
		( *mAfterLastExecuted )->Do( );
		// Executing the next to execute

		++mAfterLastExecuted;
		// Now pointing AFTER the last executed

		return true;
	}
	else
	// The last command is the last executed => nothing to redo
	{
		cout << "# End of Redo list. Cannot redo more" << endl;
		return false;
	}

} //----- End of Redo


//--------------------------------------------------- Operator overloading


//---------------------------------------------- Constructors - destructor

Controller::~Controller ( )
// Algorithm:
//
{
#ifdef DEBUG
	mOutput << "# Calling destructor of <Controller>" << endl;
#endif
} //----- End of ~Controller


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

Controller::Controller ( )
: mAfterLastExecuted( mCommands.begin( ) )
{
#ifdef DEBUG
	mOutput << "# Calling constructor of <Controller>" << endl;
#endif
} //----- End of Controller


void Controller::handleError ( Command * pCommand ) const
{
	cout << "ERR" << endl << "# " << pCommand->ErrorMessage( ) << endl;
#ifdef DEBUG
	mOutput << "# Command will be deleted" << endl;
#endif
	delete pCommand;
	pCommand = 0;
#ifdef DEBUG
	mOutput << "# Command Deleted." << endl;
#endif
} //----- End of handleError


void Controller::saveCommand ( Command * pCommand )
// Saves a new command and forgets about all the next ones
// Algorithm:
// Uses an iterator pointing to the next available slot.
// It starts by freeing all next slots (delete and = 0), and then inserts the
// pCommand BEFORE the first empty slot, thus adding a new element.
{
#ifdef DEBUG
	mOutput << "# New command after undoing" << endl;
	mOutput << "# All the commands after the last executed one will be deleted" << endl;
#endif

	for ( CommandList::iterator it = mAfterLastExecuted;
		  it != mCommands.end();
		  ++it )
	{
		// This loop will delete every command that has been undone
		// and is now cancelled by the new command
		delete *it;
		*it = 0;
	}

	if ( mCommands.end( ) != mAfterLastExecuted )
	{
		*mAfterLastExecuted = pCommand;
		++mAfterLastExecuted;
	}
	else
	{
		mCommands.push_back( pCommand );
	}

} //----- End of executeCommand


void Controller::deleteOldestCommand ( )
{
	cout << "# Undo list is full." << endl;
	cout << "# Oldest Command will be deleted" << endl;
	delete *( mCommands.begin( ) );
	*( mCommands.begin( ) ) = 0;
	mCommands.pop_front( );

} //----- End of deleteOldestCommand

