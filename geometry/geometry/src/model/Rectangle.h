/*************************************************************************
                           Rectangle  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <Rectangle> (file Rectangle.h) ------
#if ! defined ( RECTANGLE_H_ )
#define RECTANGLE_H_

//-------------------------------------------------------- Interfaces used
#include "Figure.h"

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <Rectangle>
//
//
//------------------------------------------------------------------------

class Rectangle : public Figure
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods
	// type Method ( parameter list );
	// How to use:
	//
	// Contract:
	//

	virtual void Move ( Point const & rVector );
	// How to use:
	// Moves the object along the vector rVector.

//--------------------------------------------------- Operator overloading
	// Rectangle & operator = ( Rectangle const & aRectangle );
	// Default

	virtual std::string ToString ( ) const;
	// How to use:
	// Returns a string containing the interesting information of the figure.

//---------------------------------------------- Constructors - destructor
	// Rectangle ( Rectangle const & aRectangle );
	// Default

	Rectangle ( std::string name, Point const & rTopLeft,
			    Point const & rBottomRight );
	// How to use:
	//
	// Contract:
	//

	virtual ~Rectangle ( );
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

//------------------------------ Other definitions depending on <Rectangle>

#endif // RECTANGLE_H_

