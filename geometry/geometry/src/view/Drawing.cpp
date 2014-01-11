/*************************************************************************
                           Drawing  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <Drawing> (file Drawing.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "Drawing.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type Drawing::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
Drawing::Drawing ( )
// Algorithm:
//
{
#ifdef MAP
	cout << "Calling constructor of <Drawing>" << endl;
#endif
} //----- End of Drawing


Drawing::~Drawing ( )
// Algorithm:
//
{
#ifdef MAP
	cout << "Calling destructor of <Drawing>" << endl;
#endif
} //----- End of ~Drawing


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

