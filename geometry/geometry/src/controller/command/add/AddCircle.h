/*************************************************************************
                           AddCircle  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <AddCircle> (file AddCircle.h) ------
#if ! defined ( ADDCIRCLE_H_ )
#define ADDCIRCLE_H_

//-------------------------------------------------------- Interfaces used
#include "AddCommand.h"

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <AddCircle>
//
//
//------------------------------------------------------------------------

class AddCircle : public AddCommand
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
	// AddCircle & operator = ( AddCircle const & anAddCircle );
	// Default

//---------------------------------------------- Constructors - destructor
	// AddCircle ( AddCircle const & anAddCircle );
	// Default

	AddCircle ( );
	// How to use:
	//
	// Contract:
	//

	virtual ~AddCircle ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <AddCircle>

#endif // ADDCIRCLE_H_

