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
#include <set>

#include "../model/Figure.h"
#include "../model/Point.h"
#include "../model/Aggregate.h"

//------------------------------------------------------------------ Types
typedef Aggregate DrawingFigureList;

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

	static Drawing & GetInstance ( );
	// How to use:
	// Returns the single instance of the interpreter.

	bool MoveFigure ( std::string const & rName, Point const & rVector );
	// How to use:
	// Moves the figure under the name rName by the vector rVector.
	// Contract:
	// Returns false if it didn't find any figure under the name rName.

	void AddFigure ( Figure *pFigure );
	// How to use:
	// Adds a figure to the list of the Drawing.

	void CopyAllFigures ( DrawingFigureList const & rListToCopy );
	// How to use:
	// Adds all the figures from rListToCopy to this.

	bool FigureExists ( std::string const & rName );
	// How to use:
	// Returns whether the figure is found.

	Figure * const GetFigure ( std::string const & rName );
	// How to use:
	// Gives the pointer to a Figure currently saved in the Drawing.
	// Returns 0 if the figure is not found.
	// Contract:
	// You may NOT delete the Figure.

	void PrintList ( std::ostream & rOutput, bool alphabetical = true ) const;
	// How to use:
	// Prints the list of figures on an output stream.
	// By default, it is sorted alphabetically, but you can sort it by
	// order of creation.
	// Contract:
	// The order of the list will either be alphabetical or by creation order.

	bool IgnoreFigure ( std::string rName );
	// How to use:
	// Ignores the figure with the name given in parameter.
	// Contract:
	// Returns false if it didn't find any figure under the name rName.

	void IgnoreFigures ( DrawingFigureList const & rAggregate );
	// How to use:
	// Ignores the figure found in parameter.

	bool AcknowledgeFigure ( std::string const & rName );
	// How to use:
	// Stops ignoring the figure with the name given in parameter.
	// Contract:
	// Returns false if it didn't find any figure under the name rName.

	bool AcknowledgeFigures ( DrawingFigureList const & rAggregate );
	// How to use:
	// Stops ignoring the figures found in parameter.

	bool DeleteFigure ( std::string const & rName );
	// How to use:
	// Permanently deletes the figure it finds.
	// Contract:
	// Returns false if it didn't find any figure under the name rName.

	void DeleteFigures ( DrawingFigureList const & rAggregate );
	// How to use:
	// Permanently deletes the figure it finds in the parameter.

	DrawingFigureList const GetList ( ) const;
	// How to use:
	// Returns a constant copy of the current list.

	void Clear ( );
	// How to use:
	// Permanently deletes ALL figures contained in the Aggregate.

//--------------------------------------------------- Operator overloading
	// Drawing & operator = ( Drawing const & aDrawing );
	// Deep copy, deleting the original value.
	// Not necessary for singleton.

//---------------------------------------------- Constructors - destructor
	// Drawing ( Drawing const & aDrawing );
	// Deep copy, keeping the original value.
	// Not necessary for singleton.

	virtual ~Drawing ( );
	// How to use:
	// Deep destruction, deleting all objects remaining in the list.
	// Remember to clear the

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods
	Drawing ( );
	// Because the Drawing is a singleton.

//--------------------------------------------------- Protected attributes
	static Drawing instance;

	DrawingFigureList mModel;
};

//------------------------------ Other definitions depending on <Drawing>

#endif // DRAWING_H_

