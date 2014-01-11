/*************************************************************************
                           Command  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <Command> (file Command.h) ------
#if ! defined ( COMMAND_H_ )
#define COMMAND_H_

//-------------------------------------------------------- Interfaces used

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <Command>
//
//
//------------------------------------------------------------------------

class Command
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods
	// type Method ( parameter list );
	// How to use:
	//
	// Contract:
	//

	virtual Command * GetNew ( ) const = 0;

//--------------------------------------------------- Operator overloading
	// Command & operator = ( Command const & aCommand );
	// Default

//---------------------------------------------- Constructors - destructor
	// Command ( Command const & aCommand );
	// Default

	Command ( );
	// How to use:
	//
	// Contract:
	//

	virtual ~Command ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <Command>

#endif // COMMAND_H_

