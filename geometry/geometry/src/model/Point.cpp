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
#include <sstream>
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
string Point::ToString ( ) const
{
	stringstream ss;
	ss << x << " " << y;
	return ss.str( );
}


Point Point::operator + ( Point const & rPoint ) const
{
	return Point (x + rPoint.x, y + rPoint.y );
} //----- End of operator +


Point & Point::operator += ( Point const & rVector )
{
	x += rVector.x;
	y += rVector.y;
	return *this;
} //----- End of operator +=


Point Point::operator - () const
{
	return Point ( -x, -y );
} //----- End of operator -


//---------------------------------------------- Constructors - destructor
Point::Point ( long xParam, long yParam )
// Algorithm:
//
: x( xParam ), y( yParam )
{
#ifdef DEBUG
	cout << "# Calling constructor of <Point>" << endl;
#endif
} //----- End of Point


Point::~Point ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "# Calling destructor of <Point>" << endl;
#endif
} //----- End of ~Point


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

//------------------------------ Other definitions depending on <Point>
ostream & operator << ( ostream & rOutput,
						Point const & rPoint )
{
	rOutput << rPoint.x << " " << rPoint.y;
	return rOutput;
}

