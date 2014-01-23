/*************************************************************************
                           Line  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <Line> (file Line.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <sstream>
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "Line.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type Line::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


/*virtual*/ void Line::Move ( Point const & rVector )
{
	mBegin += rVector;
	mEnd += rVector;
} //----- End of Move


//--------------------------------------------------- Operator overloading
/*virtual*/ string Line::ToString ( ) const
{
	stringstream ss;
	ss << "L " << mName << " " << mBegin << " " << mEnd;
	return ss.str( );
}

//---------------------------------------------- Constructors - destructor
Line::Line ( string name, Point const & beginCopy, Point const & endCopy )
: Figure( name ), mBegin( beginCopy ), mEnd( endCopy )
{
#ifdef DEBUG
	cout << "# Calling constructor of <Line>" << endl;
#endif
} //----- End of Line


Line::~Line ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "# Calling destructor of <Line>" << endl;
#endif
} //----- End of ~Line


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

