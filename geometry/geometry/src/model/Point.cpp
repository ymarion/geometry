/*************************************************************************
                           Point  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <Point> (file Point.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "Point.h"

//-------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type Point::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
Point::Point ( const Point & aPoint )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling copy constructor of <Point>" << endl;
#endif
} //----- End of Point (copy constructor)


Point::Point ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling constructor of <Point>" << endl;
#endif
} //----- End of Point


Point::~Point ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling destructor of <Point>" << endl;
#endif
} //----- End of ~Point


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

