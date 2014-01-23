/*************************************************************************
                           Line  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <Line> (file Line.h) ------
#if ! defined ( LINE_H_ )
#define LINE_H_

//-------------------------------------------------------- Interfaces used
#include "Figure.h"
#include "Point.h"

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <Line>
//
//
//------------------------------------------------------------------------

class Line : public Figure
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
	// Line & operator = ( Line const & aLine );
	// Default

	virtual std::string ToString ( ) const;
	// How to use:
	// Returns a string containing the interesting information of the figure.

//---------------------------------------------- Constructors - destructor
	// Line ( Line const & aLine );
	// Default

	Line ( std::string name, Point const & beginCopy, Point const & endCopy );
	// How to use:
	// Creates a line going from point begin to end. Points are copied.

	virtual ~Line ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes
	Point mBegin;
	Point mEnd;
};

//------------------------------ Other definitions depending on <Line>

#endif // LINE_H_

