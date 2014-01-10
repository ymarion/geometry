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

//-------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type MoveCommand::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
MoveCommand::MoveCommand ( const MoveCommand & aMoveCommand )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling copy constructor of <MoveCommand>" << endl;
#endif
} //----- End of MoveCommand (copy constructor)


MoveCommand::MoveCommand ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling constructor of <MoveCommand>" << endl;
#endif
} //----- End of MoveCommand


MoveCommand::~MoveCommand ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling destructor of <MoveCommand>" << endl;
#endif
} //----- End of ~MoveCommand


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

