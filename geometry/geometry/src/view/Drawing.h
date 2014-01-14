/*************************************************************************
                           Drawing  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <Drawing> (file Drawing.h) ------
#if ! defined ( DRAWING_H_ )
#define DRAWING_H_

//-------------------------------------------------------- Interfaces used
#include <map>

#include "../model/Figure.h"

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <Drawing>
//
//
//------------------------------------------------------------------------

class Drawing
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods
	// type Method ( parameter list );
	// How to use:
	//
	// Contract:
	//

	void AddFigure ( std::string const & rName, Figure * pFigure );
	// How to use:
	// Adds a figure to the dictionary, so that it may later on be modified
	// thanks to the other methods of Drawing.

	Figure * const FindFigure ( std::string const & rName );
	// How to use:
	// Gives the pointer to a Figure currently saved in the Drawing.
	// Returns 0 if the figure is not found.
	// Contract:
	// You may NOT delete the Figure UNLESS you first remove the figure,
	// using the method RemoveFigure.
	// Notes:
	// DeleteFigure both removes AND deletes the figure it finds.

	bool DeleteFigure ( std::string const & rName );
	// How to use:
	// DeleteFigure both removes AND deletes the figure it finds.
	// Returns false if it didn't find any figure under the name rName.

	bool RemoveFigure ( std::string const & rName );
	// How to use:
	// Removes the pointer to the figure under the name rName.
	// Contract:
	// !!!IMPORTANT!!! YOU must delete the memory of the figure after removal
	// or add it back with AddFigure so that there is no memory leak.

	void Clear ( );
	// How to use:
	// Removes AND deletes ALL figures contained in the drawing.
	// Contract:
	// The figures are deleted using that method, no need to do it yourself.

	void RemoveAllFigures ( );
	// How to use:
	// Removes ALL figures contained in the drawing.
	// Useful if you don't want the destructor to handle the deleting.
	// Contract:
	// !!!IMPORTANT!!! YOU must delete the memory of the figures after removal
	// or add them back with AddFigure so that there is no memory leak.

//--------------------------------------------------- Operator overloading
	Drawing & operator = ( Drawing const & aDrawing );
	// Deep copy, deleting the original value.

//---------------------------------------------- Constructors - destructor
	Drawing ( Drawing const & aDrawing );
	// Deep copy, keeping the original value.

	Drawing ( );
	// How to use:
	// Creates an empty drawing.

	virtual ~Drawing ( );
	// How to use:
	// Deep destruction, deleting all objects remaining in the list.
	// Remember to clear the

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes
//	std::map<std::string const &, Figure *> mFigures;
};

//------------------------------ Other definitions depending on <Drawing>

#endif // DRAWING_H_

