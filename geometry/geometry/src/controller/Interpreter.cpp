/*************************************************************************
                           Interpreter  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <Interpreter> (file Interpreter.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "Interpreter.h"
#include "Command.h"
#include "../utils/CreateMap.hpp"

#include "ConcreteCommands.h" // Includes all header files of the commands

//-------------------------------------------------------- Class constants
char const Interpreter::ENDL = '\n';
char const Interpreter::DELIMITER = ' ';
string const Interpreter::STOP = "EXIT";
string const Interpreter::LIST = "LIST";

MapStringToCommand const Interpreter::COMMAND_TABLE =
		CreateMap<string const, FactoryMethod>( )
				( "OA", &CommandFactory::NewAddAggregate )
				( "C" , &CommandFactory::NewAddCircle    )
				( "L" , &CommandFactory::NewAddLine      )
				( "PL", &CommandFactory::NewAddPolyline  )
				( "R" , &CommandFactory::NewAddRectangle )

				( "MOVE"  , &CommandFactory::NewMoveCommand   )
				( "DELETE", &CommandFactory::NewDeleteCommand )

				( "CLEAR",  &CommandFactory::NewClearCommand )
				( "LOAD" ,  &CommandFactory::NewLoadCommand  );

//-------------------------------------------------------- Class variables
Interpreter Interpreter::instance = Interpreter( );
// Initialization of the singleton

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type Interpreter::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method

/* static */ Interpreter & Interpreter::GetInstance ( )
{
	return Interpreter::instance;
} //----- End of GetInstance


void Interpreter::Interpret ( istream & rStream )
{
	bool stop = false;
	while ( !stop && rStream.good( ) )
	{
		string line;
		getline( rStream, line, Interpreter::ENDL );
		stop = InterpretCommand( line );
	}
} //----- End of Interpret


bool Interpreter::InterpretCommand( string const & rLine )
{
	if ( STOP == rLine )
	{
		cout << "# Bye." << endl;
		return true;
	}
	if ( LIST == rLine )
	{
		mrController.PrintList( );
		return false;
	}

	string code( rLine.substr( 0, rLine.find( DELIMITER ) ) );
	// All characters until first DELIMITER
	string parameters( rLine.substr( rLine.find( DELIMITER ) + 1 ) );
	// All characters after first DELIMITER

	MapStringToCommand::const_iterator it;
	it = Interpreter::COMMAND_TABLE.find( code );

	if ( it == Interpreter::COMMAND_TABLE.end( ) )
	// not found
	{
		cout << "ERR Command unknown" << endl;
	}
	else
	{
		Command * pCommand = ( mFactory.*( it->second ) ) ( parameters );
		// Creating a command and passing it its arguments

		mrController.SaveAndExecute( pCommand );
	}

	return false;
} //----- End of InterpretCommand


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor

Interpreter::~Interpreter ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling destructor of <Interpreter>" << endl;
#endif
} //----- End of ~Interpreter


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods
Interpreter::Interpreter ( )
: mrController( Controller::GetInstance( ) ), mFactory( )
{
#ifdef DEBUG
	cout << "Calling constructor of <Interpreter>" << endl;
#endif
} //----- End of Interpreter

