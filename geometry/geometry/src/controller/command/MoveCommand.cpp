/*************************************************************************
                           MoveCommand  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <MoveCommand> (file MoveCommand.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "MoveCommand.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type MoveCommand::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


MoveCommand::MoveCommand( string const & rParameters )
: Command( false ), mParameters( rParameters )
{
#ifdef DEBUG
	cout << "Calling constructor of <MoveCommand>" << endl;
#endif
} //----- End of MoveCommand


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
MoveCommand::~MoveCommand ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling destructor of <MoveCommand>" << endl;
#endif
} //----- End of ~MoveCommand


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

