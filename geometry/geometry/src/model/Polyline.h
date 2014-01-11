/*************************************************************************
                           Polyline  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <Polyline> (file Polyline.h) ------
#if ! defined ( POLYLINE_H_ )
#define POLYLINE_H_

//-------------------------------------------------------- Interfaces used
#include "Figure.h"

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <Polyline>
//
//
//------------------------------------------------------------------------

class Polyline : public Figure
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
	// Polyline & operator = ( Polyline const & aPolyline );
	// Default

//---------------------------------------------- Constructors - destructor
	// Polyline ( Polyline const & aPolyline );
	// Default

	Polyline ( );
	// How to use:
	//
	// Contract:
	//

	virtual ~Polyline ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <Polyline>

#endif // POLYLINE_H_

