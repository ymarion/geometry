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

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type Point::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
Point::Point ( long xParam, long yParam )
// Algorithm:
//
: x( xParam ), y( yParam )
{
#ifdef DEBUG
	cout << "Calling constructor of <Point>" << endl;
#endif
} //----- End of Point


Point::~Point ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling destructor of <Point>" << endl;
#endif
} //----- End of ~Point


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

