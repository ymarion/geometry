/*************************************************************************
                           ViewFigure  -  description
                             -------------------
    begin                : 6 janv. 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <ViewFigure> (file ViewFigure.h) ------
#if ! defined ( VIEWFIGURE_H_ )
#define VIEWFIGURE_H_

//-------------------------------------------------------- Interfaces used

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <ViewFigure>
//
//
//------------------------------------------------------------------------

class ViewFigure
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
	// ViewFigure & operator = ( ViewFigure const & unViewFigure );
	// Default
	// How to use:
	//
	// Contract:
	//


//---------------------------------------------- Constructors - destructor
	ViewFigure ( ViewFigure const & unViewFigure );

	ViewFigure ( );
	// How to use:
	//
	// Contract:
	//

	virtual ~ViewFigure ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <ViewFigure>

#endif // VIEWFIGURE_H_

