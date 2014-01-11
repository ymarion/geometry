/*************************************************************************
                           AddPolyline  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <AddPolyline> (file AddPolyline.h) ------
#if ! defined ( ADDPOLYLINE_H_ )
#define ADDPOLYLINE_H_

//-------------------------------------------------------- Interfaces used
#include "AddCommand.h"

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <AddPolyline>
//
//
//------------------------------------------------------------------------

class AddPolyline : public AddCommand
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
	// AddPolyline & operator = ( AddPolyline const & anAddPolyline );
	// Default

//---------------------------------------------- Constructors - destructor
	// AddPolyline ( AddPolyline const & anAddPolyline );
	// Default

	AddPolyline ( );
	// How to use:
	//
	// Contract:
	//

	virtual ~AddPolyline ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <AddPolyline>

#endif // ADDPOLYLINE_H_

