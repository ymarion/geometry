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
		cout << "ERR: Arguments are not valid" << endl;
#ifdef DEBUG
		cout << "# Command will be deleted" << endl;
#endif
		delete pCommand;
		pCommand = 0;
#ifdef DEBUG
		cout << "# Command Deleted." << endl;
#endif
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
		return;
	}

	mCommands.push_back( pCommand );

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
}


void Controller::PrintList ( )
{
	mOutput << "# No list available yet." << endl;
} //----- End of PrintList


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


