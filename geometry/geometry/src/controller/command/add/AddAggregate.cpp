/*************************************************************************
                           AddAggregate  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <AddAggregate> (file AddAggregate.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "AddAggregate.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type AddAggregate::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


Command * AddAggregate::GetNewObject( )
{
	return new AddAggregate( );
} //----- End of GetNewObject


Command * AddAggregate::GetNew( ) const
{
	return AddAggregate::GetNewObject( );
} //----- End of GetNew


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AddAggregate::AddAggregate ( )
// Algorithm:
//
{
#ifdef MAP
	cout << "Calling constructor of <AddAggregate>" << endl;
#endif
} //----- End of AddAggregate

AddAggregate::~AddAggregate ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling destructor of <AddAggregate>" << endl;
#endif
} //----- End of ~AddAggregate


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

