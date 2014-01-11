/*************************************************************************
                           MoveCommand  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <MoveCommand> (file MoveCommand.h) ------
#if ! defined ( MOVECOMMAND_H_ )
#define MOVECOMMAND_H_

//-------------------------------------------------------- Interfaces used
#include "Command.h"

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <MoveCommand>
//
//
//------------------------------------------------------------------------

class MoveCommand : public Command
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods
	// type Method ( parameter list );
	// How to use:
	//
	// Contract:
	//

	static Command * GetNewObject ( );
	// How to use:
	// Returns a pointer to a new object of this class.
	// Contract:
	// The memory MUST BE FREED BY THE CALLER, using delete.

	virtual Command * GetNew ( ) const;
	// How to use:
	// Returns a pointer to a new object of this class.
	// Contract:
	// The memory MUST BE FREED BY THE CALLER, using delete.

//--------------------------------------------------- Operator overloading
	// MoveCommand & operator = ( MoveCommand const & aMoveCommand );
	// Default

//---------------------------------------------- Constructors - destructor
	// MoveCommand ( MoveCommand const & aMoveCommand );
	// Default

	MoveCommand ( );
	// How to use:
	//
	// Contract:
	//

	virtual ~MoveCommand ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <MoveCommand>

#endif // MOVECOMMAND_H_

