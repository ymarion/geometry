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


streambuf * Controller::SetOutput( ostream & rStream )
{
	return mOutput.rdbuf( rStream.rdbuf( ) );
} //----- End of SetOutput


void Controller::SaveAndExecute( Command * const pCommand )
{
	if ( !pCommand->isValid( ) )
	{
		cout << "ERR: " << pCommand->ErrorMessage( ) << endl;
#ifdef DEBUG
		cout << "# Command will be deleted" << endl;
#endif
		delete pCommand;
//		pCommand = 0;
#ifdef DEBUG
		cout << "# Command Deleted." << endl;
#endif
		return;
	}

	if ( iCommandIterator != mCommands.end() )
    {
#ifdef DEBUG
		cout << "# New command after undoing" << endl;
		cout << "# All the commands after the last executed one will be deleted" << endl;
#endif
        while( iCommandIterator != mCommands.end() )
        {
            // This loop will delete every command that has been undone and cancelled by the new command
            delete *( mCommands.end( ) );
            *( mCommands.end( ) ) = 0;
            mCommands.pop_back( );
        }
        mCommands.push_back( pCommand );
        pCommand->Execute( );
        return;
    }

	if ( mCommands.size() == MAX_UNDO_REDOS )
	{
		cout << "# Undo/Redo list is full." << endl;
		cout << "# Oldest Command will be deleted" << endl;
		delete *( mCommands.begin( ) );
		*( mCommands.begin( ) ) = 0;
		mCommands.pop_front( );
		mCommands.push_back( pCommand );
		pCommand->Execute( );
		return;
	}

	mCommands.push_back( pCommand );
	// Adds the command to the undo/redo list

	pCommand->Execute( );
	// Executes it

	iCommandIterator = mCommands.end();

} //----- End of Execute


void Controller::DeInit ( )
{
#ifdef DEBUG
	cout << "# Emptying command list" << endl;
#endif
	while ( !mCommands.empty( ) )
	{
		delete *( mCommands.begin( ) );
		*( mCommands.begin( ) ) = 0;
		mCommands.pop_front( );
	}
#ifdef DEBUG
	cout << "# Emptied list" << endl;
#endif
} //----- End of DeInit


void Controller::PrintList ( )
{
	mOutput << "# No list available yet." << endl;
} //----- End of PrintList

void Controller::UndoRedo ( bool whichOne )
{
    if(!whichOne)
    {
        if( iCommandIterator != mCommands.begin() )
        {
#ifdef DEBUG
		cout << "# Undoing command" << endl;
#endif
            *iCommandIterator.Undo( );
            iCommandIterator--;
        }
        else
        {
            cout << "# End of undo list. Cannot undo more" << endl;
        }
    }
    else
    {
        if( iCommandIterator != mCommands.end() )
        {
#ifdef DEBUG
            cout << "# Redoing command" << endl;
#endif
            *iCommandIterator.Execute( );
            iCommandIterator++;
        }
        else
        {
            cout << "# End of Redo list. Cannot redo more" << endl;
        }
    }
} //----- End of UndoRedo

//--------------------------------------------------- Operator overloading


//---------------------------------------------- Constructors - destructor

Controller::~Controller ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling destructor of <Controller>" << endl;
#endif
} //----- End of ~Controller


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

Controller::Controller ( ostream & rStream )
: mOutput ( rStream )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling constructor of <Controller>" << endl;
#endif
} //----- End of Controller


