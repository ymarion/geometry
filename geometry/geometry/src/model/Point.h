/*************************************************************************
                           Point  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <Point> (file Point.h) ------
#if ! defined ( POINT_H_ )
#define POINT_H_

//-------------------------------------------------------- Interfaces used

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <Point>
//
// Container of two long attributes (x and y position).
//------------------------------------------------------------------------

struct Point
{
//----------------------------------------------------------------- PUBLIC

public:
//------------------------------------------------------ Public attributes
	long x;
	long y;
//--------------------------------------------------------- Public methods
	// type Method ( parameter list );
	// How to use:
	//
	// Contract:
	//

//--------------------------------------------------- Operator overloading
	// Point & operator = ( Point const & aPoint );
	// Default

	Point operator + ( Point const & rPoint ) const;
	// Adds the four coordinates so that result is (x1 + x2, y1 + y2)

	Point & operator += ( Point const & rVector );
	// Moves the coordinates of the point by vector rVector

	Point operator - () const;
	// Returns a point with negated coordinates (ie. returns the inverted vector)

//---------------------------------------------- Constructors - destructor
	// Point ( Point const & aPoint );
	// Default

	Point ( long x, long y );
	// How to use:
	//
	// Contract:
	//

	virtual ~Point ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <Point>

#endif // POINT_H_

