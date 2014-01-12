/*************************************************************************
                           Command  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <Command> (file Command.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "Command.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type Command::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor

Command::Command ( bool validState )
: mValidState( validState )
{
#ifdef DEBUG
	cout << "Calling constructor of <Command>" << endl;
#endif
} //----- End of Command


Command::~Command ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling destructor of <Command>" << endl;
#endif
} //----- End of ~Command


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

