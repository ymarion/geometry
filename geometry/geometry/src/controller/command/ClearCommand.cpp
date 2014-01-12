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

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type ClearCommand::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
ClearCommand::ClearCommand ( string const & rParameters )
: Command ( false ), mParameters( rParameters )
{
#ifdef DEBUG
	cout << "Calling constructor of <ClearCommand>" << endl;
#endif
} //----- End of ClearCommand


ClearCommand::~ClearCommand ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling destructor of <ClearCommand>" << endl;
#endif
} //----- End of ~ClearCommand


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

