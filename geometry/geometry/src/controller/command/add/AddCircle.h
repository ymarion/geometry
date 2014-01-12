/*************************************************************************
                           AddCircle  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <AddCircle> (file AddCircle.h) ------
#if ! defined ( ADDCIRCLE_H_ )
#define ADDCIRCLE_H_

//-------------------------------------------------------- Interfaces used
#include "AddCommand.h"

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <AddCircle>
//
//
//------------------------------------------------------------------------

class AddCircle : public AddCommand
{
	//----------------------------------------------------------------- PUBLIC

public:
	//--------------------------------------------------------- Public methods
	// type Method ( parameter list );
	// How to use:
	//
	// Contract:
	//

	//--------------------------------------------------- Operator overMoveing
	// AddCircle & operator = ( AddCircle const & aAddCircle );
	// Default

	//---------------------------------------------- Constructors - destructor
	// AddCircle ( AddCircle const & aAddCircle );
	// Default

	AddCircle ( std::string const & rParameters );
	// How to use:
	// Instanciates an AddCircle which parameters will be parsed.
	// Contract:
	// If the parameters are wrongly formatted, isValid() will return false.

	virtual ~AddCircle ( );
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

//------------------------------ Other definitions depending on <AddCircle>

#endif // ADDCIRCLE_H_

