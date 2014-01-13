/*************************************************************************
                           AddCircle  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <AddCircle> (file AddCircle.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "AddCircle.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type AddCircle::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


/*virtual*/ void AddCircle::Execute ( Drawing & rDrawing )
{
	// TODO
}

/*virtual*/ void AddCircle::Undo ( Drawing & rDrawing )
{
	// TODO
}


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AddCircle::AddCircle ( string const & rParameters )
: AddCommand( false ), mParameters( rParameters )
{
#ifdef DEBUG
	cout << "Calling constructor of <AddCircle>" << endl;
#endif
} //----- End of AddCircle


AddCircle::~AddCircle ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling destructor of <AddCircle>" << endl;
#endif
} //----- End of ~AddCircle


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

