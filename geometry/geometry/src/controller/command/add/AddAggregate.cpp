/*************************************************************************
                           AddAggregate  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <AddAggregate> (file AddAggregate.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "AddAggregate.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type AddAggregate::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


/*virtual*/ void AddAggregate::Execute ( Drawing & rDrawing )
{
	// TODO
}

/*virtual*/ void AddAggregate::Undo ( Drawing & rDrawing )
{
	// TODO
}


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AddAggregate::AddAggregate ( string const & rParameters )
: AddCommand( false ), mParameters( rParameters )
{
#ifdef DEBUG
	cout << "Calling constructor of <AddAggregate>" << endl;
#endif
} //----- End of AddAggregate


AddAggregate::~AddAggregate ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling destructor of <AddAggregate>" << endl;
#endif
} //----- End of ~AddAggregate


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

