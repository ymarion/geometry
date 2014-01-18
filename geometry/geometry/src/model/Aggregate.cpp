/*************************************************************************
                           Aggregate  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <Aggregate> (file Aggregate.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <set>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//------------------------------------------------------- Personal include
#include "Aggregate.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type Aggregate::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


Aggregate::MoveFigure::MoveFigure ( Point const & rVector )
: mrVector ( rVector ), mMovedFigures( /*empty*/ )
{
} //----- End of Aggregate::MoveFigure


void Aggregate::MoveFigure::operator () ( StringFigurePair & rPair )
// Algorithm:
// For each figure, moves it if it is not found in the mMovedFigures list
{
	set<Figure *>::const_iterator it = mMovedFigures.find( rPair.second );

	if ( mMovedFigures.end( ) == it )
	// Figure not moved yet
	{
		(*it)->Move( mrVector );
		mMovedFigures.insert( rPair.second );
	}
} //----- End of MoveFigure::operator ()


/*virtual*/ void Aggregate::Move ( Point const & rVector )
// Moves each Figure once
{
	for_each( mAggregatedFigures.begin( ), mAggregatedFigures.end( ),
			MoveFigure( rVector ) );
} //----- End of Move


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
Aggregate::Aggregate ( AggregatedFigures const & rFiguresToCopy )
: mAggregatedFigures( rFiguresToCopy )
{
#ifdef DEBUG
	cout << "Calling constructor of <Aggregate>" << endl;
#endif
} //----- End of Aggregate


Aggregate::~Aggregate ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling destructor of <Aggregate>" << endl;
#endif
} //----- End of ~Aggregate


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

