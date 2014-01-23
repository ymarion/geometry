/*************************************************************************
                           Aggregate  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <Aggregate> (file Aggregate.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

//------------------------------------------------------- Personal include
#include "Aggregate.h"
#include "../controller/Interpreter.h"

//-------------------------------------------------------- Class constants
char const Aggregate::IMPOSSIBLE = Interpreter::DELIMITER;

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type Aggregate::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


/*virtual*/ void Aggregate::Move ( Point const & rVector )
// Moves each Figure once
{
	for ( AggregatedFigures::iterator it = mAggregatedFigures.begin( );
		  it != mAggregatedFigures.end( );
		  ++it )
	{
		if ( !( it->second ).moved && !( it->second ).ignored )
		{
			( it->first )->Move( rVector );
			( it->second ).ignored = true;
		}
	}

	for ( AggregatedFigures::iterator it = mAggregatedFigures.begin( );
		 it != mAggregatedFigures.end( );
		 ++it )
	{
		( it->second ).moved = false;
	}
} //----- End of Move


bool Aggregate::IsEmpty ( ) const
{
	if ( mAggregatedFigures.empty( ) ) { return true; }

	for ( AggregatedFigures::const_iterator it = mAggregatedFigures.begin( );
		 it != mAggregatedFigures.end( );
		 ++it )
	{
		if ( !( it->second ).ignored )
		{
			return false;
		}
	}

	return true;
} //----- End of IsEmpty


void Aggregate::AddFigure( Figure *pFigure )
{
	mAggregatedFigures.insert( make_pair( pFigure, AggregatedFigureInfo( ) ) );
} //----- End of AddFigure


void Aggregate::AddFiguresFrom ( Aggregate const & rAggregate )
{
	mAggregatedFigures.insert( rAggregate.mAggregatedFigures.begin( ),
							   rAggregate.mAggregatedFigures.end( ) );
} //----- End of AddFiguresFrom


Figure * const Aggregate::FindFigure ( std::string const & rName )
{
	AggregatedFigures::iterator it( findFigure( rName ) );
	if ( notFound( it ) || ( it->second ).ignored ) { return 0; }

	return it->first;
} //----- End of FindFigure


void Aggregate::PrintList ( std::ostream & rOutput, bool alphabetical ) const
{
	if ( alphabetical )
	{
		for ( AggregatedFigures::const_iterator it = mAggregatedFigures.begin( );
			 it != mAggregatedFigures.end( );
			 ++it )
		{
			if ( !( it->second ).ignored )
			{
				rOutput << *( it->first ) << endl;
			}
		}
	}
	else
	{
		map<int, Figure *> list;
		for ( AggregatedFigures::const_iterator it = mAggregatedFigures.begin( );
			 it != mAggregatedFigures.end( );
			 ++it )
		{
			if ( !( it->second ).ignored )
			{
				std::cout << "# inserting " << ( it->first )->ToString( ) << endl;
				list.insert( make_pair( ( it->first )->GetId( ),
									    ( it->first ) ) );
			}
		}
		for ( map<int, Figure *>::const_iterator it = list.begin( );
			  it != list.end( );
			  ++it )
		{
			rOutput << ( it->second )->ToString( ) << endl;
		}
	}
} //----- End of PrintList


bool Aggregate::IgnoreFigure ( string rName )
{
	AggregatedFigures::iterator it( findFigure( rName ) );
	if ( notFound( it ) )
	{
		return false;
	}

	( it->second ).ignored = true;

	addIdToName( it );

	return true;
} //----- End of IgnoreFigure


void Aggregate::IgnoreFigures ( Aggregate const & rAggregate )
{
	for ( AggregatedFigures::const_iterator it
				= rAggregate.mAggregatedFigures.begin( );
		  it != rAggregate.mAggregatedFigures.end( );
		  ++it)
	{
		IgnoreFigure( ( it->first )->GetName( ) );
	}
} //----- End of IgnoreFigures

void Aggregate::PrintAll()
{
	for ( AggregatedFigures::const_iterator it = mAggregatedFigures.begin( );
		 it != mAggregatedFigures.end( );
		 ++it )
	{
		cout << *( it->first ) << endl;
	}
	cout << endl;
}

bool Aggregate::AcknowledgeFigure ( string const & rName )
{
	AggregatedFigures::iterator it( findFigure( rName ) );
	if ( notFound( it ) )
	{
		return false;
	}

	( it->second ).ignored = false;

	removeIdFromName( it );

	return true;
} //----- End of AcknowledgeFigure

bool Aggregate::AcknowledgeFigures ( Aggregate const & rAggregate )
{
	for ( AggregatedFigures::const_iterator it
		 = rAggregate.mAggregatedFigures.begin( );
		 it != rAggregate.mAggregatedFigures.end( );
		 ++it)
	{
		if ( !AcknowledgeFigure( ( it->first )->GetName( ) ) )
		{
			return false;
		}
	}
	return true;
} //----- End of AcknowledgeFigures


bool Aggregate::DeleteFigure ( std::string const & rName )
{
	AggregatedFigures::iterator it( findFigure( rName ) );
	if ( notFound( it ) ) { return false; }

	delete it->first;
	mAggregatedFigures.erase( it );

	return true;
} //----- End of DeleteFigure


void Aggregate::DeleteFigures ( Aggregate const & rAggregate )
{
	for ( AggregatedFigures::const_iterator it
		 = rAggregate.mAggregatedFigures.begin( );
		 it != rAggregate.mAggregatedFigures.end( );
		 ++it)
	{
		DeleteFigure( ( it->first )->GetName( ) );
	}
} //----- End of DeleteFigures


Aggregate const Aggregate::GetCurrentState ( ) const
{
	return *this;
	// Copy constructing
} //----- End of GetCurrentState


void Aggregate::Clear ( )
{
	for ( AggregatedFigures::iterator it = mAggregatedFigures.begin( );
		 it != mAggregatedFigures.end( );
		 ++it )
	{
		delete it->first;
	}
	mAggregatedFigures.clear( );
} //----- End of Clear


//--------------------------------------------------- Operator overloading
/*virtual*/ string Aggregate::ToString ( ) const
{
	string aggregatesAsString;

	for ( AggregatedFigures::const_iterator it = mAggregatedFigures.begin ( );
		 it != mAggregatedFigures.end( );
		 ++it )
	{
		aggregatesAsString += string( " " ) + ( it->first )->GetName( );
	}

	return string( "OA " ) + mName + aggregatesAsString;
} //----- End of ToString


//---------------------------------------------- Constructors - destructor
Aggregate::Aggregate ( string name )
: Figure ( name ), mAggregatedFigures( /*empty*/ )
{
#ifdef DEBUG
	cout << "# Calling constructor of <Aggregate>" << endl;
#endif
} //----- End of Aggregate

Aggregate::Aggregate ( string name, AggregatedFigures const & rFiguresToCopy )
: Figure ( name ), mAggregatedFigures( rFiguresToCopy )
{
#ifdef DEBUG
	cout << "# Calling constructor of <Aggregate>" << endl;
#endif
} //----- End of Aggregate


Aggregate::~Aggregate ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "# Calling destructor of <Aggregate>" << endl;
#endif
} //----- End of ~Aggregate


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods
bool Aggregate::notFound ( AggregatedFigures::const_iterator it ) const
{
	return mAggregatedFigures.end( ) == it;
} //----- End of notFound


struct Aggregate::EmptyFigure : public Figure
{
	virtual void Move ( Point const & rVector ) { }

	virtual std::string ToString ( ) const { return mName; }

	EmptyFigure ( std::string const & name ) : Figure ( name ) { }
};


void Aggregate::addIdToName( AggregatedFigures::iterator it )
{
	stringstream ss;
	ss << ( it->first )->GetName( ) << '-' << ( it->first )->GetId( );
	( it->first )->SetName( ss.str( ) );
}


void Aggregate::removeIdFromName( AggregatedFigures::iterator it )
{
	string newName = ( it->first )->GetName( );

	long pos = newName.find( IMPOSSIBLE );
	newName = newName.substr( 0, pos );
	// Removing the impossible character and the ID

	( it->first )->SetName( newName );
}


AggregatedFigures::iterator Aggregate::findFigure ( string const & rName )
{
	EmptyFigure f( rName );
	return mAggregatedFigures.find( &f );
} //----- End of findFigure

