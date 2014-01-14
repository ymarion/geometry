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
#include <vector>

#include "Figure.h"
#include "Point.h"

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

	static void MovePoint (Point & rP, Point const & rVector );
	// How to use:
	// Moves a single point.

	virtual void Move ( Point const & rVector );
	// How to use:
	// Moves the object along the vector rVector.

//--------------------------------------------------- Operator overloading
	// Polyline & operator = ( Polyline const & aPolyline );
	// Default

//---------------------------------------------- Constructors - destructor
	// Polyline ( Polyline const & aPolyline );
	// Default

	Polyline ( std::vector<Point> const & rPointList );
	// How to use:
	// The point list will be copied.

	virtual ~Polyline ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes
	struct MovePoint
	{
		MovePoint ( Point const & rVector )
		: mrVector ( rVector ) { }

		void operator () ( Point & rP )
		{    rP += mrVector;    }

		Point const & mrVector;
	};

	std::vector<Point> mPointList;
};

//------------------------------ Other definitions depending on <Polyline>

#endif // POLYLINE_H_

