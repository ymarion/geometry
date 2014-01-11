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
#include "Figure.h"

//------------------------------------------------------------------ Types

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

//--------------------------------------------------- Operator overloading
	// Aggregate & operator = ( Aggregate const & anAggregate );
	// Default

//---------------------------------------------- Constructors - destructor
	// Aggregate ( Aggregate const & anAggregate );
	// Default

	Aggregate ( );
	// How to use:
	//
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

};

//------------------------------ Other definitions depending on <Aggregate>
//------------------------------ Other definitions depending on <Aggregate>

#endif // AGGREGATE_H_

