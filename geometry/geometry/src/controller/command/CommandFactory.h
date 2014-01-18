/*************************************************************************
						CommandFactory  -  description
                             -------------------
    begin                : Jan 12 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <CommandFactory> (file CommandFactory.h) ------
#if ! defined ( COMMANDFACTORY_H_ )
#define COMMANDFACTORY_H_

//-------------------------------------------------------- Interfaces used
#include <string>

#include "Command.h"
#include "ConcreteCommands.h"

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <CommandFactory>
//
//
//------------------------------------------------------------------------

class CommandFactory
{
	//----------------------------------------------------------------- PUBLIC

public:
	//--------------------------------------------------------- Public methods
	// type Method ( parameter list );
	// How to use:
	//
	// Contract:
	//

	Command * NewAddAggregate  ( Drawing & rDrawing,
								 std::string const & rParameters ) const;
	// How to use:
	// Returns a pointer to a new object of the appropriate class.
	// Contract:
	// The memory MUST BE FREED BY THE CALLER, using Clear.

	Command * NewAddCircle     ( Drawing & rDrawing,
								 std::string const & rParameters ) const;
	// How to use:
	// Returns a pointer to a new object of the appropriate class.
	// Contract:
	// The memory MUST BE FREED BY THE CALLER, using Clear.

	Command * NewAddLine       ( Drawing & rDrawing,
								 std::string const & rParameters ) const;
	// How to use:
	// Returns a pointer to a new object of the appropriate class.
	// Contract:
	// The memory MUST BE FREED BY THE CALLER, using Clear.

	Command * NewAddPolyline   ( Drawing & rDrawing,
								 std::string const & rParameters ) const;
	// How to use:
	// Returns a pointer to a new object of the appropriate class.
	// Contract:
	// The memory MUST BE FREED BY THE CALLER, using Clear.

	Command * NewAddRectangle  ( Drawing & rDrawing,
								 std::string const & rParameters ) const;
	// How to use:
	// Returns a pointer to a new object of the appropriate class.
	// Contract:
	// The memory MUST BE FREED BY THE CALLER, using Clear.


	Command * NewMoveCommand   ( Drawing & rDrawing,
								 std::string const & rParameters ) const;
	// How to use:
	// Returns a pointer to a new object of the appropriate class.
	// Contract:
	// The memory MUST BE FREED BY THE CALLER, using Clear.

	Command * NewDeleteCommand ( Drawing & rDrawing,
								 std::string const & rParameters ) const;
	// How to use:
	// Returns a pointer to a new object of the appropriate class.
	// Contract:
	// The memory MUST BE FREED BY THE CALLER, using Clear.


	Command * NewClearCommand  ( Drawing & rDrawing,
								 std::string const & rParameters ) const;
	// How to use:
	// Returns a pointer to a new object of the appropriate class.
	// Contract:
	// The memory MUST BE FREED BY THE CALLER, using Clear.

	Command * NewLoadCommand   ( Drawing & rDrawing,
								 std::string const & rParameters ) const;
	// How to use:
	// Returns a pointer to a new object of the appropriate class.
	// Contract:
	// The memory MUST BE FREED BY THE CALLER, using Clear.

	//--------------------------------------------------- Operator overloading
	// CommandFactory & operator = ( CommandFactory const & aCommandFactory );
	// Default

	CommandFactory ( );
	// Only for tracing purposes

	//---------------------------------------------- Constructors - destructor
	// CommandFactory ( CommandFactory const & aCommandFactory );
	// Default

	virtual ~CommandFactory ( );
	// How to use:
	//
	// Contract:
	//

	//---------------------------------------------------------------- PRIVATE

protected:
	//------------------------------------------------------ Protected methods

	//--------------------------------------------------- Protected attributes
};

//------------------------------ Other definitions depending on <CommandFactory>

#endif // COMMANDFACTORY_H_

