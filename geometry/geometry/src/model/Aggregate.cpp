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
		if ( ( *it )->MoveOk( ) && ( *it )->IsIgnored( ) )
		{
			( *it )->Move( rVector );
			( *it )->SetMoveOk( false );
		}
	}
} //----- End of Move


/*virtual*/ bool Aggregate::MoveOk ( ) const
{
	if ( !mMoveOk ) { return false; }
	for ( AggregatedFigures::const_iterator it = mAggregatedFigures.begin( );
		 it != mAggregatedFigures.end( );
		 ++it )
	{
		if ( !( *it )->MoveOk( ) )
		{
			return false;
		}
	}
	return true;
} //----- End of MoveOk


/*virtual*/ void Aggregate::SetMoveOk ( bool moveOk )
{
	mMoveOk = moveOk;
	if ( mMoveOk )
	{
		for ( AggregatedFigures::iterator it = mAggregatedFigures.begin( );
			 it != mAggregatedFigures.end( );
			 ++it )
		{
			if ( !( *it )->MoveOk( ) && !( *it )->IsIgnored( ) )
			{
				( *it )->SetMoveOk( true );
			}
		}
	}
} //----- End of SetMoveOk


bool Aggregate::IsEmpty ( ) const
{
	if ( mAggregatedFigures.empty( ) ) { return true; }

	for ( AggregatedFigures::const_iterator it = mAggregatedFigures.begin( );
		 it != mAggregatedFigures.end( );
		 ++it )
	{
		if ( !( *it )->IsIgnored( ) )
		{
			return false;
		}
	}

	return true;
} //----- End of IsEmpty


void Aggregate::AddFigure( Figure *pFigure )
{
	mAggregatedFigures.insert( pFigure );
} //----- End of AddFigure


void Aggregate::AddFiguresFrom ( Aggregate const & rAggregate )
{
	mAggregatedFigures.insert( rAggregate.mAggregatedFigures.begin( ),
							   rAggregate.mAggregatedFigures.end( ) );
} //----- End of AddFiguresFrom


Figure * const Aggregate::FindFigure ( string const & rName )
{
	AggregatedFigures::iterator it( findFigure( rName ) );
	if ( notFound( it ) || ( *it )->IsIgnored( ) ) { return 0; }

	return *it;
} //----- End of FindFigure


void Aggregate::PrintList ( ostream & rOutput, bool alphabetical ) const
{
	if ( alphabetical )
	{
		for ( AggregatedFigures::const_iterator it = mAggregatedFigures.begin( );
			 it != mAggregatedFigures.end( );
			 ++it )
		{
			if ( !( *it )->IsIgnored( ) )
			{
				rOutput << *( *it ) << endl;
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
			if ( !( *it )->IsIgnored( ) )
			{
#ifdef DEBUG
				cout << "# inserting " << ( *it )->ToString( ) << endl;
#endif
				list.insert( make_pair( ( *it )->GetId( ), *it ) );
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

	( *it )->SetIgnored( true );

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
		IgnoreFigure( ( *it )->GetName( ) );
	}
} //----- End of IgnoreFigures

void Aggregate::PrintAll()
{
	for ( AggregatedFigures::const_iterator it = mAggregatedFigures.begin( );
		 it != mAggregatedFigures.end( );
		 ++it )
	{
		cout << *( *it ) << endl;
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

	( *it )->SetIgnored( false );

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
		if ( !AcknowledgeFigure( ( *it )->GetName( ) ) )
		{
			return false;
		}
	}
	return true;
} //----- End of AcknowledgeFigures


bool Aggregate::DeleteFigure ( string const & rName )
{
	AggregatedFigures::iterator it( findFigure( rName ) );
	if ( notFound( it ) ) { return false; }

	delete *it;
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
		DeleteFigure( ( *it )->GetName( ) );
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
		delete *it;
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
		if ( !( *it )->IsIgnored( ) )
		{
			aggregatesAsString += string( " " ) + ( *it )->GetName( );
		}
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
//	Clear( );
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
	Figure *pFigure = *it;
	stringstream ss;
	ss << pFigure->GetName( ) << IMPOSSIBLE << pFigure->GetId( );
	pFigure->SetName( ss.str( ) );

	mAggregatedFigures.erase( it );
	mAggregatedFigures.insert( pFigure );
}


void Aggregate::removeIdFromName( AggregatedFigures::iterator it )
{
	Figure *pFigure = *it;
	string newName = pFigure->GetName( );

	long pos = newName.find( IMPOSSIBLE );
	newName = newName.substr( 0, pos );
	// Removing the impossible character and the ID

	pFigure->SetName( newName );

	mAggregatedFigures.erase( it );
	mAggregatedFigures.insert( pFigure );
}


AggregatedFigures::iterator Aggregate::findFigure ( string const & rName )
{
	EmptyFigure f( rName );
	return mAggregatedFigures.find( &f );
} //----- End of findFigure

