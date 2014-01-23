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
#include <sstream>
using namespace std;

//------------------------------------------------------- Personal include
#include "Circle.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type Circle::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


/*virtual*/ void Circle::Move ( Point const & rVector )
{
	mCenter += rVector;
} //----- End of Move


/*virtual*/ string Circle::ToString ( ) const
{
	stringstream ss;
	ss << "C " << mName << " " << mCenter << " " << mRadius;
	return ss.str( );
}


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
Circle::Circle ( string name, Point center, long radius )
: Figure ( name ), mCenter( center ), mRadius( radius )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "# Calling constructor of <Circle>" << endl;
#endif
} //----- End of Circle


Circle::~Circle ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "# Calling destructor of <Circle>" << endl;
#endif
} //----- End of ~Circle


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods
