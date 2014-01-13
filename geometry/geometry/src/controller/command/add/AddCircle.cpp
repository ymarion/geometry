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
#include <sstream>
using namespace std;

//------------------------------------------------------- Personal include
#include "AddCircle.h"
#include "../../../model/Circle.h"

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
	rDrawing.AddFigure( mFigureName, new Circle( mCenter, mRadius ) );
}

/*virtual*/ void AddCircle::Undo ( Drawing & rDrawing )
{
	rDrawing.RemoveFigure( mFigureName );
}


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AddCircle::AddCircle ( string const & rParameters )
: AddCommand( false, rParameters ), mCenter( 0, 0 )
{
	stringstream ss( mParameters );
	ss >> mCenter.x;
	ss >> mCenter.y;
	ss >> mRadius;
	mValidState = true;

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

