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
#include <algorithm>
#include <sstream>
using namespace std;

//------------------------------------------------------- Personal include
#include "Polyline.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type Polyline::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


/*virtual*/ void Polyline::Move ( Point const & rVector )
{
	struct MovePoint movePoint( rVector );
	for_each( mPointList.begin( ), mPointList.end( ), movePoint );
} //----- End of Move


//--------------------------------------------------- Operator overloading
/*virtual*/ std::string Polyline::ToString ( ) const
{
	stringstream ss;
	ss << "PL " << mName;

	for ( vector<Point>::const_iterator it = mPointList.begin( );
		  it != mPointList.end( );
		  ++it )
	{
		ss << " " << *it;
	}

	return ss.str( );
}


//---------------------------------------------- Constructors - destructor
Polyline::Polyline ( string name, vector<Point> const & rPointList )
: Figure( name ), mPointList( rPointList )
{
#ifdef DEBUG
	cout << "# Calling constructor of <Polyline>" << endl;
#endif
} //----- End of Polyline


Polyline::~Polyline ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "# Calling destructor of <Polyline>" << endl;
#endif
} //----- End of ~Polyline


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

