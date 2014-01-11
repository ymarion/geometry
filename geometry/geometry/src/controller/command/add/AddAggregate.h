/*************************************************************************
                           AddAggregate  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <AddAggregate> (file AddAggregate.h) ------
#if ! defined ( ADDAGGREGATE_H_ )
#define ADDAGGREGATE_H_

//-------------------------------------------------------- Interfaces used
#include "AddCommand.h"

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <AddAggregate>
//
//
//------------------------------------------------------------------------

class AddAggregate : public AddCommand
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods
	// type Method ( parameter list );
	// How to use:
	//
	// Contract:
	//

	static Command * GetNewObject ( );
	// How to use:
	// Returns a pointer to a new object of this class.
	// Contract:
	// The memory MUST BE FREED BY THE CALLER, using delete.

	virtual Command * GetNew ( ) const;
	// How to use:
	// Returns a pointer to a new object of this class.
	// Contract:
	// The memory MUST BE FREED BY THE CALLER, using delete.
	
//--------------------------------------------------- Operator overloading
	// AddAggregate & operator = ( AddAggregate const & anAddAggregate );
	// Default

//---------------------------------------------- Constructors - destructor
	// AddAggregate ( AddAggregate const & anAddAggregate );
	// Default

	AddAggregate ( );
	// How to use:
	//
	// Contract:
	//

	virtual ~AddAggregate ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <AddAggregate>

#endif // ADDAGGREGATE_H_

