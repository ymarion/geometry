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
#include "Polyline.h"

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <Line>
//
//
//------------------------------------------------------------------------

class Line : public Polyline
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
	// Line & operator = ( Line const & aLine );
	// Default

//---------------------------------------------- Constructors - destructor
	// Line ( Line const & aLine );
	// Default

	Line ( );
	// How to use:
	//
	// Contract:
	//

	virtual ~Line ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <Line>

#endif // LINE_H_

