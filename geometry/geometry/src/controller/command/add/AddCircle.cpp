/*************************************************************************
                           AddCircle  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <AddCircle> (file AddCircle.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "AddCircle.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type AddCircle::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


Command * AddCircle::GetNewObject( )
{
	return new AddCircle( );
} //----- End of GetNewObject


Command * AddCircle::GetNew( ) const
{
	return AddCircle::GetNewObject( );
} //----- End of GetNew


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AddCircle::AddCircle ( )
// Algorithm:
//
{
#ifdef MAP
	cout << "Calling constructor of <AddCircle>" << endl;
#endif
} //----- End of AddCircle

AddCircle::~AddCircle ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling destructor of <AddCircle>" << endl;
#endif
} //----- End of ~AddCircle

//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

