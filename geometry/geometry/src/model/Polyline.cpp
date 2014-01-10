/*************************************************************************
                           Polyline  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <Polyline> (file Polyline.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "Polyline.h"

//-------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type Polyline::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
Polyline::Polyline ( const Polyline & aPolyline )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling copy constructor of <Polyline>" << endl;
#endif
} //----- End of Polyline (copy constructor)


Polyline::Polyline ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling constructor of <Polyline>" << endl;
#endif
} //----- End of Polyline


Polyline::~Polyline ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling destructor of <Polyline>" << endl;
#endif
} //----- End of ~Polyline


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

