/*************************************************************************
                           AddRectangle  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <AddRectangle> (file AddRectangle.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
#include <sstream>
using namespace std;

//------------------------------------------------------- Personal include
#include "AddRectangle.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type AddRectangle::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


/*virtual*/ void AddRectangle::Execute ( Drawing & rDrawing )
{
	// TODO
}

/*virtual*/ void AddRectangle::Undo ( Drawing & rDrawing )
{
	// TODO
}


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AddRectangle::AddRectangle ( string const & rParameters )
: AddCommand( false, rParameters ), mBegin( 0, 0 ), mEnd( 0, 0 )
{
	stringstream ss( mParameters );
	ss >> mBegin.x;
	ss >> mBegin.y;
	ss >> mEnd.x;
	ss >> mEnd.y;
	mValidState = true;

#ifdef DEBUG
	cout << "Calling constructor of <AddRectangle>" << endl;
#endif
} //----- End of AddRectangle


AddRectangle::~AddRectangle ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling destructor of <AddRectangle>" << endl;
#endif
} //----- End of ~AddRectangle


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

