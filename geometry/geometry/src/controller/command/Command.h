/*************************************************************************
                           Command  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <Command> (file Command.h) ------
#if ! defined ( COMMAND_H_ )
#define COMMAND_H_

//-------------------------------------------------------- Interfaces used
#include <string>
#include "../../view/Drawing.h"

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <Command>
//
//
//------------------------------------------------------------------------

class Command
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods
	// type Method ( parameter list );
	// How to use:
	//
	// Contract:
	//

	bool isValid ( ) const;
	// How to use:
	// Returns the state of the command.
	// (can be invalid mostly because of bad parameters)
	// Contract:
	// A invalid command should NEVER be used.
	// After instantiating, YOU should ALWAYS verify that a Command is valid.

	std::string const & ErrorMessage ( ) const;
	// How to use:
	// Returns the error message if the command is invalid, empty otherwise.

	virtual void Execute ( ) = 0;
    // How to use:
	//

	virtual void Undo ( ) = 0;
    // How to use:
	//

//--------------------------------------------------- Operator overloading
	// Command & operator = ( Command const & aCommand );
	// Default

//---------------------------------------------- Constructors - destructor
	// Command ( Command const & aCommand );
	// Default

	Command ( Drawing & rDrawing, bool validState, bool executed = false );
	// How to use:
	// Sets the validState flag.

	virtual ~Command ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes
	bool mError;
	std::string mErrorMessage;
	bool mWasExecuted;
	Drawing & mrDrawing;
};

//------------------------------ Other definitions depending on <Command>

#endif // COMMAND_H_

