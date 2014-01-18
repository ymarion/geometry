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
#include "../../view/Drawing.h"
#include "../../model/Point.h"

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

    virtual void Execute ( );
    // How to use:
	//

	virtual void Undo ( );
    // How to use:
	//

	//--------------------------------------------------- Operator overMoveing
	// MoveCommand & operator = ( MoveCommand const & aMoveCommand );
	// Default

	//---------------------------------------------- Constructors - destructor
	// MoveCommand ( MoveCommand const & aMoveCommand );
	// Default

	MoveCommand ( Drawing & rDrawing, std::string const & rParameters );
	// How to use:
	// Instantiates a MoveCommand which parameters will be parsed.
	// Contract:
	// If the parameters are wrongly formatted, isValid() will return false.

	virtual ~MoveCommand ( );
	// How to use:
	//
	// Contract:
	//

	//---------------------------------------------------------------- PRIVATE

protected:
	//------------------------------------------------------ Protected methods

	//--------------------------------------------------- Protected attributes
	Figure *mpFigure;
	Point mVector;
};

//------------------------------ Other definitions depending on <MoveCommand>

#endif // MOVECOMMAND_H_

