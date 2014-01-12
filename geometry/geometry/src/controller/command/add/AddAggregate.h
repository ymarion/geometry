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
#include "AddCommand.h"

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

    virtual void execute( Drawing d );
    // How to use:
	//

	virtual void undo ( Drawing d );
    // How to use:
	//

	//--------------------------------------------------- Operator overMoveing
	// AddAggregate & operator = ( AddAggregate const & aAddAggregate );
	// Default

	//---------------------------------------------- Constructors - destructor
	// AddAggregate ( AddAggregate const & aAddAggregate );
	// Default

	AddAggregate ( std::string const & rParameters );
	// How to use:
	// Instanciates an AddAggregate which parameters will be parsed.
	// Contract:
	// If the parameters are wrongly formatted, isValid() will return false.

	virtual ~AddAggregate ( );
	// How to use:
	//
	// Contract:
	//

	//---------------------------------------------------------------- PRIVATE

protected:
	//------------------------------------------------------ Protected methods

	//--------------------------------------------------- Protected attributes
	std::string mParameters;// TODO: parse string
	list<Figure> mAggregateFig;// Filled during the string parsing
};

//------------------------------ Other definitions depending on <AddAggregate>

#endif // ADDAGGREGATE_H_

