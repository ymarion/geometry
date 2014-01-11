/*************************************************************************
                           AddLine  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <AddLine> (file AddLine.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "AddLine.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type AddLine::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


Command * AddLine::GetNewObject( )
{
	return new AddLine( );
} //----- End of GetNewObject


Command * AddLine::GetNew( ) const
{
	return AddLine::GetNewObject( );
} //----- End of GetNew


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AddLine::AddLine ( )
// Algorithm:
//
{
#ifdef MAP
	cout << "Calling constructor of <AddLine>" << endl;
#endif
} //----- End of AddLine


AddLine::~AddLine ( )
// Algorithm:
//
{
#ifdef MAP
	cout << "Calling destructor of <AddLine>" << endl;
#endif
} //----- End of ~AddLine


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

