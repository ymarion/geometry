/*************************************************************************
                           AddCommand  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <AddCommand> (file AddCommand.h) ------
#if ! defined ( ADDCOMMAND_H_ )
#define ADDCOMMAND_H_

//-------------------------------------------------------- Interfaces used
#include "../Command.h"

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <AddCommand>
//
//
//------------------------------------------------------------------------

class AddCommand : public Command
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods
	// type Method ( parameter list );
	// How to use:
	//
	// Contract:
	//

//--------------------------------------------------- Operator overloading
	// AddCommand & operator = ( AddCommand const & anAddCommand );
	// Default

//---------------------------------------------- Constructors - destructor
	// AddCommand ( AddCommand const & anAddCommand );
	// Default

	AddCommand ( );
	// How to use:
	//
	// Contract:
	//

	virtual ~AddCommand ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <AddCommand>

#endif // ADDCOMMAND_H_

