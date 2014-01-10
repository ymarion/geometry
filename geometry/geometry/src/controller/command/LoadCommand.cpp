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

//-------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type LoadCommand::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading


//---------------------------------------------- Constructors - destructor
LoadCommand::LoadCommand ( const LoadCommand & aLoadCommand )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling copy constructor of <LoadCommand>" << endl;
#endif
} //----- End of LoadCommand (copy constructor)


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

