/*************************************************************************
                           AddLine  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <AddLine> (file AddLine.h) ------
#if ! defined ( ADDLINE_H_ )
#define ADDLINE_H_

//-------------------------------------------------------- Interfaces used
#include "AddCommand.h"

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <AddLine>
//
//
//------------------------------------------------------------------------

class AddLine : public AddCommand
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
	// AddLine & operator = ( AddLine const & anAddLine );
	// Default

//---------------------------------------------- Constructors - destructor
	// AddLine ( AddLine const & anAddLine );
	// Default

	AddLine ( );
	// How to use:
	//
	// Contract:
	//

	virtual ~AddLine ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <AddLine>

#endif // ADDLINE_H_

