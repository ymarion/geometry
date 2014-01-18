/*************************************************************************
                           AddAggregate  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <AddAggregate> (file AddAggregate.h) ------
#if ! defined ( ADDAGGREGATE_H_ )
#define ADDAGGREGATE_H_

//-------------------------------------------------------- Interfaces used
#include <vector>

#include "AddCommand.h"
#include "../../../view/Drawing.h"
#include "../../../model/Aggregate.h"

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <AddAggregate>
//
//
//------------------------------------------------------------------------

class AddAggregate : public AddCommand
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
	// AddAggregate & operator = ( AddAggregate const & aAddAggregate );
	// Default

//---------------------------------------------- Constructors - destructor
	// AddAggregate ( AddAggregate const & aAddAggregate );
	// Default

	AddAggregate ( Drawing & rDrawing, std::string const & rParameters );
	// How to use:
	// Instantiates an AddAggregate which parameters will be parsed.
	// Contract:
	// If the parameters are wrong (format/logic), isValid() will return false.

	virtual ~AddAggregate ( );
	// How to use:
	//
	// Contract:
	// Destroys the Aggregate it is pointing to

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes
	AggregatedFigures mFigures;// Filled during the string parsing
	Aggregate * mpAggregate;
};

//------------------------------ Other definitions depending on <AddAggregate>

#endif // ADDAGGREGATE_H_

