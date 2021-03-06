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
#include "../../../view/Drawing.h"
#include "../../../model/Point.h"

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

//--------------------------------------------------- Operator overloading
	// AddRectangle & operator = ( AddRectangle const & anAddRectangle );
	// Default

//---------------------------------------------- Constructors - destructor
	// AddRectangle ( AddRectangle const & anAddRectangle );
	// Default

	AddRectangle ( Drawing & rDrawing, std::string const & rParameters );
	// How to use:
	// Instantiates an AddRectangle which parameters will be parsed.
	// Contract:
	// If the parameters are wrongly formatted, isValid() will return false.

	virtual ~AddRectangle ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes
	Point mCorner1;
	Point mCorner2;
};

//------------------------------ Other definitions depending on <AddRectangle>

#endif // ADDRECTANGLE_H_

