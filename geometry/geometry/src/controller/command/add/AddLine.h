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
#include "../../../view/Drawing.h"
#include "../../../model/Point.h"

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

    virtual void execute( Drawing & rDrawing );
    // How to use:
	//

	virtual void undo( Drawing & rDrawing );
    // How to use:
	//

	//--------------------------------------------------- Operator overMoveing
	// AddLine & operator = ( AddLine const & aAddLine );
	// Default

	//---------------------------------------------- Constructors - destructor
	// AddLine ( AddLine const & aAddLine );
	// Default

	AddLine ( std::string const & rParameters );
	// How to use:
	// Instanciates an AddLine which parameters will be parsed.
	// Contract:
	// If the parameters are wrongly formatted, isValid() will return false.

	virtual ~AddLine ( );
	// How to use:
	//
	// Contract:
	//

	//---------------------------------------------------------------- PRIVATE

protected:
	//------------------------------------------------------ Protected methods

	//--------------------------------------------------- Protected attributes
	std::string mParameters;// TODO: parse string
	Point mBegin;
	Point mEnd;
};

//------------------------------ Other definitions depending on <AddLine>

#endif // ADDLINE_H_

