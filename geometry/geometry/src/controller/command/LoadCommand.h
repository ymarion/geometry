/*************************************************************************
                           LoadCommand  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <LoadCommand> (file LoadCommand.h) ------
#if ! defined ( LOADCOMMAND_H_ )
#define LOADCOMMAND_H_

//-------------------------------------------------------- Interfaces used
#include "Command.h"

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <LoadCommand>
//
//
//------------------------------------------------------------------------

class LoadCommand : public Command
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
	// LoadCommand & operator = ( LoadCommand const & aLoadCommand );
	// Default

//---------------------------------------------- Constructors - destructor
	// LoadCommand ( LoadCommand const & aLoadCommand );
	// Default

	LoadCommand ( );
	// How to use:
	//
	// Contract:
	//

	virtual ~LoadCommand ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <LoadCommand>

#endif // LOADCOMMAND_H_

