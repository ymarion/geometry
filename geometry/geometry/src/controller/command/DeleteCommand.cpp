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

//-------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type DeleteCommand::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
DeleteCommand::DeleteCommand ( const DeleteCommand & aDeleteCommand )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling copy constructor of <DeleteCommand>" << endl;
#endif
} //----- End of DeleteCommand (copy constructor)


DeleteCommand::DeleteCommand ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling constructor of <DeleteCommand>" << endl;
#endif
} //----- End of DeleteCommand


DeleteCommand::~DeleteCommand ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling destructor of <DeleteCommand>" << endl;
#endif
} //----- End of ~DeleteCommand


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

