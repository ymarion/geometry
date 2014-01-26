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


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AddCircle::AddCircle ( Drawing & rDrawing, string const & rParameters )
: AddCommand( rDrawing, false, rParameters ), mCenter( 0, 0 )
{
	bool error;
	stringstream ss( mParameters );

	ss >> mCenter.x;
	ss >> mCenter.y;
	ss >> mRadius;

	error = ss.fail( );
	if ( !mError && error )
	// No error yet except for the last one
	{
		mError = true;
		mErrorMessage = mFigureName
						+ ": Impossible to parse coordinates or radius";
	}
	mpFigure = new Circle( mFigureName, mCenter, mRadius );

#ifdef DEBUG
	cout << "# Calling constructor of <AddCircle>" << endl;
#endif
} //----- End of AddCircle


AddCircle::~AddCircle ( )
{
#ifdef DEBUG
	cout << "# Calling destructor of <AddCircle>" << endl;
#endif
} //----- End of ~AddCircle


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

