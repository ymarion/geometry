/*************************************************************************
                           SaveCommand  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <SaveCommand> (file SaveCommand.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "SaveCommand.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type SaveCommand::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


Command * SaveCommand::GetNewObject( )
{
	return new SaveCommand( );
} //----- End of GetNewObject


Command * SaveCommand::GetNew( ) const
{
	return SaveCommand::GetNewObject( );
} //----- End of GetNew


//--------------------------------------------------- Operator overSaveing


//---------------------------------------------- Constructors - destructor
SaveCommand::SaveCommand ( )
// Algorithm:
//
{
#ifdef MAP
	cout << "Calling constructor of <SaveCommand>" << endl;
#endif
} //----- End of SaveCommand


SaveCommand::~SaveCommand ( )
// Algorithm:
//
{
#ifdef MAP
	cout << "Calling destructor of <SaveCommand>" << endl;
#endif
} //----- End of ~SaveCommand


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

