/*************************************************************************
                           AddPolyline  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <AddPolyline> (file AddPolyline.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "AddPolyline.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type AddPolyline::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


/*virtual*/ void AddPolyline::Execute ( Drawing & rDrawing )
{
	// TODO
}

/*virtual*/ void AddPolyline::Undo ( Drawing & rDrawing )
{
	// TODO
}


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AddPolyline::AddPolyline ( string const & rParameters )
: AddCommand( false ), mParameters( rParameters )
{
#ifdef DEBUG
	cout << "Calling constructor of <AddPolyline>" << endl;
#endif
} //----- End of AddPolyline


AddPolyline::~AddPolyline ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling destructor of <AddPolyline>" << endl;
#endif
} //----- End of ~AddPolyline


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

