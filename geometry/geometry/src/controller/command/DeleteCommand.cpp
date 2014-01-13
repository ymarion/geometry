/*************************************************************************
                           DeleteCommand  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <DeleteCommand> (file DeleteCommand.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "DeleteCommand.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type DeleteCommand::Method( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


/*virtual*/ void DeleteCommand::Execute ( Drawing & rDrawing )
{
	// TODO
}

/*virtual*/ void DeleteCommand::Undo ( Drawing & rDrawing )
{
	// TODO
}


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
DeleteCommand::DeleteCommand ( string const & rParameters )
: Command( false ), mParameters( rParameters )
{
#ifdef DEBUG
	cout << "Calling constructor of <DeleteCommand>" << endl;
#endif
} //----- End of DeleteCommand


DeleteCommand::~DeleteCommand( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling destructor of <DeleteCommand>" << endl;
#endif
} //----- End of ~DeleteCommand


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

