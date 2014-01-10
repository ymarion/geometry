/*************************************************************************
                           Line  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <Line> (file Line.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "Line.h"

//-------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type Line::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
Line::Line ( const Line & aLine )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling copy constructor of <Line>" << endl;
#endif
} //----- End of Line (copy constructor)


Line::Line ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling constructor of <Line>" << endl;
#endif
} //----- End of Line


Line::~Line ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling destructor of <Line>" << endl;
#endif
} //----- End of ~Line


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

