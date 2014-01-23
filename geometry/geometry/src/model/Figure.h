/*************************************************************************
                           Figure  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <Figure> (file Figure.h) ------
#if ! defined ( FIGURE_H_ )
#define FIGURE_H_

//-------------------------------------------------------- Interfaces used
#include "Point.h"

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <Figure>
//
//
//------------------------------------------------------------------------

class Figure
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods
	// type Method ( parameter list );
	// How to use:
	//
	// Contract:
	//

	virtual void Move ( Point const & rVector ) = 0;
	// How to use:
	// Moves the object along the vector rVector.

	std::string const & GetName ( ) const;
	// How to use:
	// Returns the name of the figure.

	void SetName ( std::string const & rNewName );
	// How to use:
	// Changes the name of the figure.

//--------------------------------------------------- Operator overloading
	// Figure & operator = ( Figure const & aFigure );
	// Default

	long GetId ( ) const;
	// How to use:
	// Returns the object id (its creation order)

	bool operator == ( Figure const & rFigureToCompare ) const;
	// How to use:
	// You may check if the name of this figure is equal to a string.
	// Contract:
	// This is case INsensitive.

	bool operator < ( Figure const & rFigureToCompare ) const;
	// How to use:
	// You may check if the name of this figure is lower than a string.
	// Contract:
	// This is case INsentive.

	virtual std::string ToString ( ) const = 0;
	// How to use:
	// Returns a string containing the interesting information of the figure.

//---------------------------------------------- Constructors - destructor
	// Figure ( Figure const & aFigure );
	// Default

	Figure ( std::string const name );
	// How to use:
	//
	// Contract:
	//

	virtual ~Figure ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods
	void toLower ( string & rStringToTransform ) const;

//--------------------------------------------------- Protected attributes
	static long currentId;

	long const mId;

	std::string mName;
	std::string mNameLow;
};

//------------------------------ Other definitions depending on <Figure>
std::ostream & operator << ( std::ostream & rOutput,
							 Figure const & rFigure );
// How to use:
// Writes ToString to the given output.

#endif // FIGURE_H_

