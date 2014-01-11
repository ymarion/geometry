/*************************************************************************
                           AddRectangle  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <AddRectangle> (file AddRectangle.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "AddRectangle.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type AddRectangle::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


Command * AddRectangle::GetNewObject( )
{
	return new AddRectangle( );
} //----- End of GetNewObject


Command * AddRectangle::GetNew( ) const
{
	return AddRectangle::GetNewObject( );
} //----- End of GetNew


//--------------------------------------------------- Operator overloading


//---------------------------------------------- Constructors - destructor
AddRectangle::AddRectangle ( )
// Algorithm:
//
{
#ifdef MAP
	cout << "Calling constructor of <AddRectangle>" << endl;
#endif
} //----- End of AddRectangle


AddRectangle::~AddRectangle ( )
// Algorithm:
//
{
#ifdef MAP
	cout << "Calling destructor of <AddRectangle>" << endl;
#endif
} //----- End of ~AddRectangle


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

