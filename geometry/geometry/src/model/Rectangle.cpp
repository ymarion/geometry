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

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type Rectangle::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


/*virtual*/ void Rectangle::Move ( Point const & rVector )
{
	mTopLeftCorner += rVector;
	mBottomRightCorner += rVector;
} //----- End of Move


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
Rectangle::Rectangle ( Point const & rTopLeft, Point const & rBottomRight )
: mTopLeftCorner( rTopLeft ), mBottomRightCorner( rBottomRight )
{
#ifdef DEBUG
	cout << "Calling constructor of <Rectangle>" << endl;
#endif
} //----- End of Rectangle


Rectangle::~Rectangle ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling destructor of <Rectangle>" << endl;
#endif
} //----- End of ~Rectangle


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

