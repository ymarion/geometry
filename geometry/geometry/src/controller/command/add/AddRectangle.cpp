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


AddRectangle::AddRectangle( string const & rParameters )
: AddCommand( false ), mParameters( rParameters )
{
#ifdef DEBUG
	cout << "Calling constructor of <AddRectangle>" << endl;
#endif
} //----- End of AddRectangle


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AddRectangle::~AddRectangle ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling destructor of <AddRectangle>" << endl;
#endif
} //----- End of ~AddRectangle


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

