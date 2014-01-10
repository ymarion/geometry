/*************************************************************************
                           Rectangle  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <Rectangle> (file Rectangle.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "Rectangle.h"

//-------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type Rectangle::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
Rectangle::Rectangle ( const Rectangle & aRectangle )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling copy constructor of <Rectangle>" << endl;
#endif
} //----- End of Rectangle (copy constructor)


Rectangle::Rectangle ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling constructor of <Rectangle>" << endl;
#endif
} //----- End of Rectangle


Rectangle::~Rectangle ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling destructor of <Rectangle>" << endl;
#endif
} //----- End of ~Rectangle


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

