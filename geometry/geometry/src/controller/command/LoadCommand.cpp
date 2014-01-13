/*************************************************************************
                           LoadCommand  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <LoadCommand> (file LoadCommand.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "LoadCommand.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type LoadCommand::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


/*virtual*/ void LoadCommand::Execute ( Drawing & rDrawing )
{
	// TODO
}

/*virtual*/ void LoadCommand::Undo ( Drawing & rDrawing )
{
	// TODO
}


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
LoadCommand::LoadCommand ( string const & rParameters )
: Command( false ), mParameters( rParameters )
{
#ifdef DEBUG
	cout << "Calling constructor of <LoadCommand>" << endl;
#endif
} //----- End of LoadCommand


LoadCommand::~LoadCommand ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling destructor of <LoadCommand>" << endl;
#endif
} //----- End of ~LoadCommand


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

