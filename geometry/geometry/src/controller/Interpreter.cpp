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
#include "../utils/CreateMap.hpp"

#include "command/ConcreteCommands.h" // Includes all header files of the commands

//-------------------------------------------------------- Class constants
char const Interpreter::ENDL = '\n';
char const Interpreter::DELIMITER = ' ';
char const Interpreter::COMMENT = '#';

string const Interpreter::STOP = "EXIT";
string const Interpreter::LIST = "LIST";
string const Interpreter::UNDO = "UNDO";
string const Interpreter::REDO = "REDO";
string const Interpreter::SAVE = "SAVE";


MapStringToCommand const Interpreter::COMMAND_TABLE =
			CreateMap<string const, FactoryMethod>
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


Command * Interpreter::GetCommand ( string const & code,
								 string const & parameters )
{
	MapStringToCommand::const_iterator it;
	it = Interpreter::COMMAND_TABLE.find( code );

	if ( it == Interpreter::COMMAND_TABLE.end( ) )
		// not found
	{
		cout << "ERR" << endl << "# Command unknown" << endl;
		return 0;
	}

	Command * pCommand = ( mFactory.*( it->second ) )
	( Drawing::GetInstance( ), parameters );
	// Creating a command and passing it its arguments
	return pCommand;
}


bool Interpreter::InterpretCommand( string const & rLine )
{
	if ( STOP == rLine )
	{
		mrController.DeInit();
		cout << "# Bye." << endl;
		return true;
	}
	if ( COMMENT == rLine[0] )
	{
		// Ignoring comment
		return false;
	}
	if ( LIST == rLine )
	{
		mrController.PrintList( );
		return false;
	}
	if ( UNDO == rLine )
    {
        mrController.Undo( );
        return false;
    }
    if ( REDO == rLine )
    {
        mrController.Redo( );
        return false;
    }

	long pos = rLine.find( DELIMITER );
	string code( rLine.substr( 0, pos ) );
	// All characters until first DELIMITER
	string parameters( rLine.substr( pos + 1 ) );
	// All characters after first DELIMITER

	if ( SAVE == code )
	{
		ofstream outputFile( parameters.c_str( ) );
		if ( outputFile.fail( ) || 0 == pos )
		{
			cout << "ERR" << endl << "# Impossible to write file " << parameters;
			return false;
		}
		mrController.PrintList( false, outputFile );
		cout << "OK" << endl;
		return false;
	}

	Command *pCommand = GetCommand( code, parameters );

	if ( 0 != pCommand )
	// Command exists
	{
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
	cout << "# Calling destructor of <Interpreter>" << endl;
#endif
} //----- End of ~Interpreter


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods
Interpreter::Interpreter ( )
: mrController( Controller::GetInstance( ) ), mFactory( )
{
#ifdef DEBUG
	cout << "# Calling constructor of <Interpreter>" << endl;
#endif
} //----- End of Interpreter

