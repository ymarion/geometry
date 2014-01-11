/*************************************************************************
                           DeleteCommand  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <DeleteCommand> (file DeleteCommand.h) ------
#if ! defined ( DELETECOMMAND_H_ )
#define DELETECOMMAND_H_

//-------------------------------------------------------- Interfaces used
#include "Command.h"

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <DeleteCommand>
//
//
//------------------------------------------------------------------------

class DeleteCommand : public Command
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
	// DeleteCommand & operator = ( DeleteCommand const & aDeleteCommand );
	// Default

//---------------------------------------------- Constructors - destructor
	// DeleteCommand ( DeleteCommand const & aDeleteCommand );
	// Default

	DeleteCommand ( );
	// How to use:
	//
	// Contract:
	//

	virtual ~DeleteCommand ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <DeleteCommand>

#endif // DELETECOMMAND_H_

