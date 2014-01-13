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


/*virtual*/ void MoveCommand::Execute ( Drawing & rDrawing )
{
	// TODO
}

/*virtual*/ void MoveCommand::Undo ( Drawing & rDrawing )
{
	// TODO
}


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
MoveCommand::MoveCommand ( string const & rParameters )
: Command( false ), mParameters( rParameters )
{
#ifdef DEBUG
	cout << "Calling constructor of <MoveCommand>" << endl;
#endif
} //----- End of MoveCommand


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

