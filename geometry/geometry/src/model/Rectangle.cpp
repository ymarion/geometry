/*************************************************************************
                           Rectangle  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <Rectangle> (file Rectangle.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <sstream>
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
	mCorner1 += rVector;
	mCorner2 += rVector;
} //----- End of Move


//--------------------------------------------------- Operator overloading
/*virtual*/ std::string Rectangle::ToString ( ) const
{
	stringstream ss;
	ss << "R " << mName << " " << mCorner1 << " " << mCorner2;
	return ss.str( );
}


//---------------------------------------------- Constructors - destructor
Rectangle::Rectangle ( string name, Point const & rCorner1,
					   Point const & rCorner2 )
: Figure ( name ), mCorner1( rCorner1 ),
  mCorner2( rCorner2 )
{
#ifdef DEBUG
	cout << "# Calling constructor of <Rectangle>" << endl;
#endif
} //----- End of Rectangle


Rectangle::~Rectangle ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "# Calling destructor of <Rectangle>" << endl;
#endif
} //----- End of ~Rectangle


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

