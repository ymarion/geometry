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
#include <vector>

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

    virtual void Execute ( );
    // How to use:
	//

	virtual void Undo ( );
    // How to use:
	//

//--------------------------------------------------- Operator overloading
	// DeleteCommand & operator = ( DeleteCommand const & aDeleteCommand );
	// Default

//---------------------------------------------- Constructors - destructor
	// DeleteCommand ( DeleteCommand const & aDeleteCommand );
	// Default

	DeleteCommand ( Drawing & rDrawing, std::string const & rParameters );
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
	struct RemoveFigure
	{
		RemoveFigure ( Drawing & rDrawing )
		: mrDrawing ( rDrawing ) { }

		void operator () ( std::string const & rFigName )
		{    mrDrawing.RemoveFigure( rFigName );    }

		Drawing & mrDrawing;
	};

	std::vector<std::string> mDeleteList;
};

//------------------------------ Other definitions depending on <DeleteCommand>

#endif // DELETECOMMAND_H_

