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
#include "../../../view/Drawing.h"
#include "../../../model/Point.h"

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

    virtual void Execute ( Drawing & rDrawing );
    // How to use:
	//

	virtual void Undo ( Drawing & rDrawing );
    // How to use:
	//

	//--------------------------------------------------- Operator overMoveing
	// AddPolyline & operator = ( AddPolyline const & aAddPolyline );
	// Default

	//---------------------------------------------- Constructors - destructor
	// AddPolyline ( AddPolyline const & aAddPolyline );
	// Default

	AddPolyline ( std::string const & rParameters );
	// How to use:
	// Instantiates an AddPolyline which parameters will be parsed.
	// Contract:
	// If the parameters are wrongly formatted, isValid() will return false.

	virtual ~AddPolyline ( );
	// How to use:
	//
	// Contract:
	//

	//---------------------------------------------------------------- PRIVATE

protected:
	//------------------------------------------------------ Protected methods

	//--------------------------------------------------- Protected attributes
	std::string mParameters;// TODO: parse string
	//list<Point> mPoint
};

//------------------------------ Other definitions depending on <AddPolyline>

#endif // ADDPOLYLINE_H_

