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
	cout << "# No save and execute possible yet." << endl;
	cout << "# Deleting..." << endl;
	delete pCommand;
	cout << "# Deleted." << endl;
} //----- End of Execute


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


