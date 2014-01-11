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

/* static */ Controller & Controller::GetInstance ( )
{
	return Controller::instance;
} //----- End of GetInstance

//--------------------------------------------------- Operator overloading


//---------------------------------------------- Constructors - destructor

Controller::~Controller ( )
// Algorithm:
//
{
#ifdef MAP
	cout << "Calling destructor of <Controller>" << endl;
#endif
} //----- End of ~Controller


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

Controller::Controller ( )
// Algorithm:
//
{
#ifdef MAP
	cout << "Calling constructor of <Controller>" << endl;
#endif
} //----- End of Controller


