/*************************************************************************
                           Circle  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <Circle> (file Circle.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "Circle.h"

//-------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type Circle::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
Circle::Circle ( const Circle & aCircle )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling copy constructor of <Circle>" << endl;
#endif
} //----- End of Circle (copy constructor)


Circle::Circle ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling constructor of <Circle>" << endl;
#endif
} //----- End of Circle


Circle::~Circle ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling destructor of <Circle>" << endl;
#endif
} //----- End of ~Circle


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

