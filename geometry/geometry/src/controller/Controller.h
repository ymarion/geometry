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
#include <list>

#include "command/Command.h"

//------------------------------------------------------------------ Types
typedef std::list<Command *> CommandList;

//------------------------------------------------------------------------
// Class role of <Controller>
//
//
//------------------------------------------------------------------------

class Controller
{
//----------------------------------------------------------------- PUBLIC

public:
	static int const MAX_UNDO_REDOS;

//--------------------------------------------------------- Public methods
	// type Method ( parameter list );
	// How to use:
	//
	// Contract:
	//

	static Controller & GetInstance ( std::ostream & rStream = std::cout );
	// How to use:
	// Returns the single instance of the controller.

	void SaveAndExecute ( Command * pCommand );
	// How to use:
	// Executes the command and saves it into a list of undo/redo.
	// Contract:
	// The controller handles all memory of this list; and will free
	// all the commands using delete.

	void PrintList ( bool alphabetical = true,
					 std::ostream & rOutput = std::cout );
	// How to use:
	// Prints the list of the figures currently in the drawing on the stream.

	void DeInit ( );
	// How to use:
	// Free all the commands currently in the undo/redo list (mCommands)

	bool Undo ( );
	// How to use:
	// Undoes the last command that was executed.
	// Contract:
	// Returns false if there is no more command to undo, true else.

	bool Redo ( );
	// How to use:
	// Redoes the last command that was undone.
	// Contract:
	// Returns false if there is no more command to redo, true else.

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

	Controller ( );
	// Because the controller is a singleton.

	void handleError ( Command * pCommand ) const;
	// Prints the error message of the pCommand and deletes it

	void saveCommand ( Command * pCommand );
	// Saves a new command and forgets about all the next ones

	void deleteOldestCommand ( );
	// Deletes the oldest command from the list.

//--------------------------------------------------- Protected attributes
	static Controller instance;

	class PrintFigure;

	CommandList mCommands;
	CommandList::iterator mAfterLastExecuted;
};

//------------------------------ Other definitions depending on <Controller>

#endif // CONTROLLER_H_

