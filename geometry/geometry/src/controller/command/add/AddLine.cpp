/*************************************************************************
                           AddLine  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <AddLine> (file AddLine.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "AddLine.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type AddLine::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


/*virtual*/ void AddLine::Execute ( Drawing & rDrawing )
{
	// TODO
}

/*virtual*/ void AddLine::Undo ( Drawing & rDrawing )
{
	// TODO
}


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AddLine::AddLine ( string const & rParameters )
: AddCommand( false ), mParameters( rParameters )
{
#ifdef DEBUG
	cout << "Calling constructor of <AddLine>" << endl;
#endif
} //----- End of AddLine


AddLine::~AddLine ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling destructor of <AddLine>" << endl;
#endif
} //----- End of ~AddLine


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

