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
#include "../../../view/Drawing.h"
#include "../../../model/Point.h"

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

	//--------------------------------------------------- Operator overloading
	// AddCircle & operator = ( AddCircle const & aAddCircle );
	// Default

	//---------------------------------------------- Constructors - destructor
	// AddCircle ( AddCircle const & aAddCircle );
	// Default

	AddCircle ( Drawing & rDrawing, std::string const & rParameters );
	// How to use:
	// Instantiates an AddCircle which parameters will be parsed.
	// Contract:
	// If the parameters are wrongly formatted, isValid() will return false.

	virtual ~AddCircle ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes
	Point mCenter;
	int mRadius;
};

//------------------------------ Other definitions depending on <AddCircle>

#endif // ADDCIRCLE_H_

