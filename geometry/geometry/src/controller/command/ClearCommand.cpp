/*************************************************************************
                           ClearCommand  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <ClearCommand> (file ClearCommand.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "ClearCommand.h"

//-------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type ClearCommand::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
ClearCommand::ClearCommand ( const ClearCommand & aClearCommand )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling copy constructor of <ClearCommand>" << endl;
#endif
} //----- End of ClearCommand (copy constructor)


ClearCommand::ClearCommand ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling constructor of <ClearCommand>" << endl;
#endif
} //----- End of ClearCommand


ClearCommand::~ClearCommand ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling destructor of <ClearCommand>" << endl;
#endif
} //----- End of ~ClearCommand


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

