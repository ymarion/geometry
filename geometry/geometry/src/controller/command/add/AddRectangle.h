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

    virtual void Execute ( Drawing & rDrawing );
    // How to use:
	//

	virtual void Undo ( Drawing & rDrawing );
    // How to use:
	//

//--------------------------------------------------- Operator overloading
	// AddRectangle & operator = ( AddRectangle const & anAddRectangle );
	// Default

//---------------------------------------------- Constructors - destructor
	// AddRectangle ( AddRectangle const & anAddRectangle );
	// Default

	AddRectangle ( std::string const & rParameters );
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
	std::string mParameters;// TODO: parse string
	int mPosx1;
	int mPosy1;
	int mPosx2;
	int mPosy2;
};

//------------------------------ Other definitions depending on <AddRectangle>

#endif // ADDRECTANGLE_H_

