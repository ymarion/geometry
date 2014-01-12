/*************************************************************************
                           Controller  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <Controller> (file Controller.h) ------
#if ! defined ( CONTROLLER_H_ )
#define CONTROLLER_H_

//-------------------------------------------------------- Interfaces used
#include "Command.h"

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <Controller>
//
//
//------------------------------------------------------------------------

class Controller
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods
	// type Method ( parameter list );
	// How to use:
	//
	// Contract:
	//

	static Controller & GetInstance ( std::ostream & rStream = std::cout );
	// How to use:
	// Returns the single instance of the controller.

	std::streambuf * SetOutput ( std::ostream & rStream );
	// How to use:
	// Changes the output to write the result to.

	void SaveAndExecute ( Command * const pCommand );
	// How to use:
	// Executes the command and saves it into a list of undo/redo.
	// Contract:
	// The controller handles all memory of this list; and will free
	// all the commands using delete.

	void PrintList ( );
	// How to use:
	// Prints the list of the figures currently in the drawing on the stream.

//--------------------------------------------------- Operator overloading
	// Controller & operator = ( Controller const & rController );
	// Default

//---------------------------------------------- Constructors - destructor
	// Controller ( Controller const & rController );
	// Default

//---------------------------------------------- Constructors - destructor

	virtual ~Controller ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

	Controller ( std::ostream & rStream = std::cout );
	// Because the controller is a singleton.

//--------------------------------------------------- Protected attributes
	static Controller instance;

	std::ostream & mOutput;
};

//------------------------------ Other definitions depending on <Controller>

#endif // CONTROLLER_H_

