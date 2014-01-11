/*************************************************************************
                           SaveCommand  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <SaveCommand> (file SaveCommand.h) ------
#if ! defined ( SAVECOMMAND_H_ )
#define SAVECOMMAND_H_

//-------------------------------------------------------- Interfaces used
#include "Command.h"

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <SaveCommand>
//
//
//------------------------------------------------------------------------

class SaveCommand : public Command
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
	
//--------------------------------------------------- Operator overSaveing
	// SaveCommand & operator = ( SaveCommand const & aSaveCommand );
	// Default

//---------------------------------------------- Constructors - destructor
	// SaveCommand ( SaveCommand const & aSaveCommand );
	// Default

	SaveCommand ( );
	// How to use:
	//
	// Contract:
	//

	virtual ~SaveCommand ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <SaveCommand>

#endif // SAVECOMMAND_H_

