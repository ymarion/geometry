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


Command * LoadCommand::GetNewObject( )
{
	return new LoadCommand( );
} //----- End of GetNewObject


Command * LoadCommand::GetNew( ) const
{
	return LoadCommand::GetNewObject( );
} //----- End of GetNew


//--------------------------------------------------- Operator overloading


//---------------------------------------------- Constructors - destructor
LoadCommand::LoadCommand ( )
// Algorithm:
//
{
#ifdef MAP
	cout << "Calling constructor of <LoadCommand>" << endl;
#endif
} //----- End of LoadCommand


LoadCommand::~LoadCommand ( )
// Algorithm:
//
{
#ifdef MAP
	cout << "Calling destructor of <LoadCommand>" << endl;
#endif
} //----- End of ~LoadCommand


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

