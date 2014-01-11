/*************************************************************************
                           AddRectangle  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <AddRectangle> (file AddRectangle.h) ------
#if ! defined ( ADDRECTANGLE_H_ )
#define ADDRECTANGLE_H_

//-------------------------------------------------------- Interfaces used
#include "AddCommand.h"

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <AddRectangle>
//
//
//------------------------------------------------------------------------

class AddRectangle : public AddCommand
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
	// AddRectangle & operator = ( AddRectangle const & anAddRectangle );
	// Default

//---------------------------------------------- Constructors - destructor
	// AddRectangle ( AddRectangle const & anAddRectangle );
	// Default

	AddRectangle ( );
	// How to use:
	//
	// Contract:
	//

	virtual ~AddRectangle ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <AddRectangle>

#endif // ADDRECTANGLE_H_

