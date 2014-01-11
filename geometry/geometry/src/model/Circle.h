/*************************************************************************
                           Circle  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <Circle> (file Circle.h) ------
#if ! defined ( CIRCLE_H_ )
#define CIRCLE_H_

//-------------------------------------------------------- Interfaces used
#include "Figure.h"

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <Circle>
//
//
//------------------------------------------------------------------------

class Circle : public Figure
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
	// Circle & operator = ( Circle const & aCircle );
	// Default

//---------------------------------------------- Constructors - destructor
	// Circle ( Circle const & aCircle );
	// Default

	Circle ( );
	// How to use:
	//
	// Contract:
	//

	virtual ~Circle ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <Circle>

#endif // CIRCLE_H_

