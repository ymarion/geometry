/*************************************************************************
                           AddPolyline  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <AddPolyline> (file AddPolyline.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "AddPolyline.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type AddPolyline::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


Command * AddPolyline::GetNewObject( )
{
	return new AddPolyline( );
} //----- End of GetNewObject


Command * AddPolyline::GetNew( ) const
{
	return AddPolyline::GetNewObject( );
} //----- End of GetNew


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AddPolyline::AddPolyline ( )
// Algorithm:
//
{
#ifdef MAP
	cout << "Calling constructor of <AddPolyline>" << endl;
#endif
} //----- End of AddPolyline


AddPolyline::~AddPolyline ( )
// Algorithm:
//
{
#ifdef MAP
	cout << "Calling destructor of <AddPolyline>" << endl;
#endif
} //----- End of ~AddPolyline


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

