/*************************************************************************
                           Figure  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <Figure> (file Figure.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "Figure.h"

//-------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type Figure::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
Figure::Figure ( const Figure & aFigure )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling copy constructor of <Figure>" << endl;
#endif
} //----- End of Figure (copy constructor)


Figure::Figure ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling constructor of <Figure>" << endl;
#endif
} //----- End of Figure


Figure::~Figure ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling destructor of <Figure>" << endl;
#endif
} //----- End of ~Figure


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods
