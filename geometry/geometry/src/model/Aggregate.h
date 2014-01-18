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
#include <map>
#include <set>

#include "Figure.h"

//------------------------------------------------------------------ Types
typedef std::pair <std::string const, Figure *> StringFigurePair;
typedef std::map  <std::string const, Figure *> AggregatedFigures;

//------------------------------------------------------------------------
// Class role of <Aggregate>
//
//
//------------------------------------------------------------------------

class Aggregate : public Figure
{
//----------------------------------------------------------------- PUBLIC
	class MoveFigure
	// Utility class helping to move each Figure of a list only once
	{
	public:
		MoveFigure ( Point const & rVector );

		void operator () ( StringFigurePair & rPair );

	protected:
		Point const & mrVector;

		std::set<Figure *> mMovedFigures;
	};

public:
//--------------------------------------------------------- Public methods
	// type Method ( parameter list );
	// How to use:
	//
	// Contract:
	//

	virtual void Move ( Point const & rVector );
	// How to use:
	// Moves all the figures aggregated.
	// Contract:
	// Only moves each figure once.

//--------------------------------------------------- Operator overloading
	// Aggregate & operator = ( Aggregate const & anAggregate );
	// Default

//---------------------------------------------- Constructors - destructor
	// Aggregate ( Aggregate const & anAggregate );
	// Default

	Aggregate ( AggregatedFigures const & rFiguresToCopy );
	// How to use:
	// Copies all figures to the internal AggregatedFigures structure.
	// Contract:
	//

	virtual ~Aggregate ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes
	AggregatedFigures mAggregatedFigures;
};

//------------------------------ Other definitions depending on <Aggregate>
//------------------------------ Other definitions depending on <Aggregate>

#endif // AGGREGATE_H_

