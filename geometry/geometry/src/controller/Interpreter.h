/*************************************************************************
                           Interpreter  -  the command interpreter.
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <Interpreter> (file Interpreter.h) ------
#if ! defined ( INTERPRETER_H_ )
#define INTERPRETER_H_

//-------------------------------------------------------- Interfaces used
#include <iostream>
#include <map>

#include "Command.h"
#include "CommandFactory.h"
#include "Controller.h"

//------------------------------------------------------------------ Types
//typedef Command * ( CommandFactory::*FactoryMethod )( std::string const & );
typedef Command * ( CommandFactory::*FactoryMethod )
									( std::string const & ) const;
typedef std::map<string const, FactoryMethod> MapStringToCommand;

//------------------------------------------------------------------------
// Class role of <Interpreter>
//
// Interprets commands given in argument and launches the appropriate
// Controller method.
//------------------------------------------------------------------------

class Interpreter
{
//----------------------------------------------------------------- PUBLIC

public:
	static char const ENDL;
	static char const DELIMITER;
	static std::string const STOP;
	static std::string const LIST;
	static MapStringToCommand const COMMAND_TABLE;
//--------------------------------------------------------- Public methods
	// type Method ( parameter list );
	// How to use:
	//
	// Contract:
	//

	static Interpreter & GetInstance ( );
	// How to use:
	// Returns the single instance of the interpreter.

	void Interpret ( std::istream & rStream );
	// How to use:
	// Interprets all commands from an input stream.
	// Contract:
	// Displays result on the standard output.

	bool InterpretCommand ( std::string const & command );
	// How to use:
	// Interprets a single command
	// Returns true if the program should stop.
	// Contract:
	// Displays ERR if command not interpretable.

//--------------------------------------------------- Operator overloading
	// Interpreter & operator = ( Interpreter const & rInterpreter );
	// Default

//---------------------------------------------- Constructors - destructor
	// Interpreter ( Interpreter const & rInterpreter );
	// Default

	virtual ~Interpreter ( );
	// How to use:
	//
	// Contract:
	//

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

	Interpreter ( );
	// Because the interpreter is a singleton.

//--------------------------------------------------- Protected attributes
	static Interpreter instance;

	Controller & mrController;
	CommandFactory mFactory;
};

//------------------------------ Other definitions depending on <Interpreter>

#endif // INTERPRETER_H_

