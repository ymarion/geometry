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
#include "../../view/Drawing.h"

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

    virtual void execute( Drawing & rDrawing );
    // How to use:
	//

	virtual void undo( Drawing & rDrawing );
    // How to use:
	//

//--------------------------------------------------- Operator overloading
	// LoadCommand & operator = ( LoadCommand const & aLoadCommand );
	// Default

//---------------------------------------------- Constructors - destructor
	// LoadCommand ( LoadCommand const & aLoadCommand );
	// Default

	LoadCommand ( std::string const & rParameters );
	// How to use:
	// Instantiates a LoadCommand which parameters will be parsed.
	// Contract:
	// If the parameters are wrongly formatted, isValid() will return false.

	virtual ~LoadCommand ( );
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

//------------------------------ Other definitions depending on <LoadCommand>

#endif // LOADCOMMAND_H_

