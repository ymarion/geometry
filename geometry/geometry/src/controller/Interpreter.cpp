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


//-------------------------------------------------------- Class constants
char const Interpreter::DELIMITER = ' ';
string const Interpreter::LIST = "LIST";
		CreateMap<string const, FactoryMethod>( )
				( "OA", &CommandFactory::NewAddAggregate )
				( "L" , &CommandFactory::NewAddLine      )
				( "PL", &CommandFactory::NewAddPolyline  )

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

} // End of Interpret

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
: mrController( Controller::GetInstance( ) )
: mrController( Controller::GetInstance( ) ), mFactory( )
{
#ifdef DEBUG
	cout << "Calling constructor of <Interpreter>" << endl;
#endif
} //----- End of Interpreter

