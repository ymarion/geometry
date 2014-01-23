/*************************************************************************
                           ClearCommand  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <ClearCommand> (file ClearCommand.h) ------
#if ! defined ( CLEARCOMMAND_H_ )
#define CLEARCOMMAND_H_

//-------------------------------------------------------- Interfaces used
#include "Command.h"
#include "../../view/Drawing.h"

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <ClearCommand>
//
//
//------------------------------------------------------------------------

class ClearCommand : public Command
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
	// ClearCommand & operator = ( ClearCommand const & aClearCommand );
	// Default

//---------------------------------------------- Constructors - destructor
	// ClearCommand ( ClearCommand const & aClearCommand );
	// Default

	ClearCommand ( Drawing & rDrawing, std::string const & rParameters );
	// How to use:
	// Instantiates a ClearCommand which parameters will be parsed.
	// Contract:
	// If the parameters are wrongly formatted, isValid() will return false.

	virtual ~ClearCommand ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods
	virtual void execute ( );
	// Will be used by Command::Do

	virtual void cancel ( );
	// Will be used by Command::Undo

//--------------------------------------------------- Protected attributes
	DrawingFigureList const mList;
};

//------------------------------ Other definitions depending on <ClearCommand>

#endif // CLEARCOMMAND_H_

