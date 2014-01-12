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

    virtual void execute( Drawing d );
    // How to use:
	//

	virtual void undo ( Drawing d );
    // How to use:
	//

//--------------------------------------------------- Operator overloading
	// ClearCommand & operator = ( ClearCommand const & aClearCommand );
	// Default

//---------------------------------------------- Constructors - destructor
	// ClearCommand ( ClearCommand const & aClearCommand );
	// Default

	ClearCommand ( std::string const & rParameters );
	// How to use:
	// Instanciates a ClearCommand which parameters will be parsed.
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

//--------------------------------------------------- Protected attributes
	std::string mParameters;// TODO: parse string
};

//------------------------------ Other definitions depending on <ClearCommand>

#endif // CLEARCOMMAND_H_

