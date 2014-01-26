/*************************************************************************
                           Aggregate  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <Aggregate> (file Aggregate.h) ------
#if ! defined ( AGGREGATE_H_ )
#define AGGREGATE_H_

//-------------------------------------------------------- Interfaces used
#include <set>

#include "Figure.h"

//------------------------------------------------------------------ Types
struct MyComp
{
	bool operator () ( Figure const * pFigure1,
					  Figure const * pFigure2 ) const
	{
		return *pFigure1 < *pFigure2;
	}
};
typedef std::set<Figure *, MyComp> AggregatedFigures;

//------------------------------------------------------------------------
// Class role of <Aggregate>
//
//
//------------------------------------------------------------------------

class Aggregate : public Figure
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods
	// type Method ( parameter list );
	// How to use:
	//
	// Contract:
	//

	virtual void Move ( Point const & rVector );
	// How to use:
	// Moves all the figures (not moved yet) once, and sets them as moved.
	// See ResetMovement for setting them back to not moved.
	// Contract:
	// Only moves each figure once.

	virtual bool MoveOk ( ) const;
	// How to use:
	// Returns whether or not the figure should be moved (true by default).

	virtual void SetMoveOk ( bool moveOk );
	// How to use:
	// Sets the MoveOk flag.

	virtual std::string ToString ( ) const;
	// How to use:
	// Returns a string containing the interesting information of the figure.

	bool IsEmpty ( ) const;
	// How to use:
	// Returns whether the aggregate is empty or not (default state).

	void AddFigure ( Figure *pFigure );
	// How to use:
	// Adds a figure to the list of the Aggregate.

	void AddFiguresFrom ( Aggregate const & rAggregate );
	// How to use:
	// Adds all the figures from rAggregate to this.

	Figure * const FindFigure ( std::string const & rName );
	// How to use:
	// Gives the pointer to a Figure currently saved in the Aggregate.
	// Returns 0 if the figure is not found.
	// Contract:
	// You may NOT delete the Figure.

	void PrintList ( std::ostream & rOutput, bool alphabetical = true ) const;
	// How to use:
	// Prints the list of figures on an output stream.
	// By default, it is sorted alphabetically, but you can sort it by
	// order of creation.
	// Contract:
	// The order of the list will either be alphabetical or by creation order.

	bool IgnoreFigure ( std::string rName );
	// How to use:
	// Ignores the figure with the name given in parameter.
	// Contract:
	// Returns false if it didn't find any figure under the name rName.

	void IgnoreFigures ( Aggregate const & rAggregate );
	// How to use:
	// Ignores the figure found in parameter.

	void IgnoreAllFigures ( );
	// How to use:
	// Ignores ALL figures contained in the list.

	void PrintAll( );

	bool AcknowledgeFigure ( std::string const & rName );
	// How to use:
	// Stops ignoring the figure with the name given in parameter.
	// Contract:
	// Returns false if it didn't find any figure under the name rName.

	bool AcknowledgeFigures ( Aggregate const & rAggregate );
	// How to use:
	// Stops ignoring the figures found in parameter.

	void AcknowledgeAllFigures ( );
	// How to use:
	// Ignores ALL figures in the list.

	bool DeleteFigure ( std::string const & rName );
	// How to use:
	// Permanently deletes the figure it finds.
	// Contract:
	// Returns false if it didn't find any figure under the name rName.

	void DeleteFigures ( Aggregate const & rAggregate );
	// How to use:
	// Permanently deletes the figure it finds in the parameter.

	Aggregate const GetCurrentState ( ) const;
	// How to use:
	// Gets a constant copy of this (the current state).

	void Clear ( );
	// How to use:
	// Permanently deletes ALL figures contained in the Aggregate.

//--------------------------------------------------- Operator overloading
	// Aggregate & operator = ( Aggregate const & anAggregate );
	// Default

//---------------------------------------------- Constructors - destructor
	// Aggregate ( Aggregate const & anAggregate );
	// Default

	Aggregate ( std::string name );
	// How to use:
	// Creates an empty aggregate.

	Aggregate ( std::string name, AggregatedFigures const & rFiguresToCopy );
	// How to use:
	// Copies all figures to the internal AggregatedFigures structure.

	virtual ~Aggregate ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
	struct EmptyFigure;
//------------------------------------------------------ Protected methods
	bool notFound ( AggregatedFigures::const_iterator it ) const;
	// Returns whether or not the iterator is end().

	void addIdToName ( AggregatedFigures::iterator it );
	// Adds the id at the end of the name of a figure.

	void removeIdFromName ( AggregatedFigures::iterator it );
	// Removes the id at the end of the name of a figure.

	AggregatedFigures::iterator findFigure ( std::string const & rName );
	// Returns an iterator to a figure bearing that name, or end if not found.

//--------------------------------------------------- Protected attributes
	static char const IMPOSSIBLE;
	class MoveFigure;
	// Utility class helping to move each Figure of a list only once

	AggregatedFigures mAggregatedFigures;
};

//------------------------------ Other definitions depending on <Aggregate>
bool operator == ( AggregatedFigures::const_iterator & it,
				   std::string const & s );

bool operator <  ( AggregatedFigures::const_iterator & it,
				   std::string const & s );

#endif // AGGREGATE_H_

