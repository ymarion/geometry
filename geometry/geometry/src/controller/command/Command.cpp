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

//-------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type Command::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
Command::Command ( const Command & aCommand )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling copy constructor of <Command>" << endl;
#endif
} //----- End of Command (copy constructor)


Command::Command ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling constructor of <Command>" << endl;
#endif
} //----- End of Command


Command::~Command ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling destructor of <Command>" << endl;
#endif
} //----- End of ~Command


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

