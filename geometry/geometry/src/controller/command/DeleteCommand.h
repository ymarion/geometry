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
#include "../../view/Drawing.h"

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

    virtual void Execute ( Drawing & rDrawing );
    // How to use:
	//

	virtual void Undo ( Drawing & rDrawing );
    // How to use:
	//

//--------------------------------------------------- Operator overloading
	// DeleteCommand & operator = ( DeleteCommand const & aDeleteCommand );
	// Default

//---------------------------------------------- Constructors - destructor
	// DeleteCommand ( DeleteCommand const & aDeleteCommand );
	// Default

	DeleteCommand ( std::string const & rParameters );
	// How to use:
	// Instantiates a DeleteCommand which parameters will be parsed.
	// Contract:
	// If the parameters are wrongly formatted, isValid() will return false.

	virtual ~DeleteCommand ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes
	std::string mParameters;// TODO: parse string
};

//------------------------------ Other definitions depending on <DeleteCommand>

#endif // DELETECOMMAND_H_

