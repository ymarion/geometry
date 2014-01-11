/*************************************************************************
                           AddCommand  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <AddCommand> (file AddCommand.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "AddCommand.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type AddCommand::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AddCommand::AddCommand ( )
// Algorithm:
//
{
#ifdef MAP
	cout << "Calling constructor of <AddCommand>" << endl;
#endif
} //----- End of AddCommand


AddCommand::~AddCommand ( )
// Algorithm:
//
{
#ifdef MAP
	cout << "Calling destructor of <AddCommand>" << endl;
#endif
} //----- End of ~AddCommand


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

