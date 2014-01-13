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
#include <sstream>
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


/*virtual*/ void ClearCommand::Execute ( Drawing & rDrawing )
{
	// TODO
}

/*virtual*/ void ClearCommand::Undo ( Drawing & rDrawing )
{
	// TODO
}


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
ClearCommand::ClearCommand ( string const & rParameters )
: Command ( false ), mParameters( rParameters )
{
	stringstream ss( rParameters );
	ss >> ws;
	// skipping whitespaces

	mValidState = ( "" == ss.str( ) );

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

