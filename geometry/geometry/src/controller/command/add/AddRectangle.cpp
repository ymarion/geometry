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
#include "../../../model/Rectangle.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type AddRectangle::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AddRectangle::AddRectangle ( Drawing & rDrawing, string const & rParameters )
: AddCommand( rDrawing, false, rParameters ), mCorner1( 0, 0 ),
  mCorner2( 0, 0 )
{
	istringstream iss( mParameters );
	iss >> mCorner1.x;
	iss >> mCorner1.y;
	iss >> mCorner2.x;
	iss >> mCorner2.y;

	bool error = iss.fail( );
	if ( !mError && error )
	{
		mError = true;
		mErrorMessage = "Impossible to parse coordinates";
	}

	mpFigure = new Rectangle ( mFigureName, mCorner1, mCorner2 );

#ifdef DEBUG
	cout << "# Calling constructor of <AddRectangle>" << endl;
#endif
} //----- End of AddRectangle


AddRectangle::~AddRectangle ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "# Calling destructor of <AddRectangle>" << endl;
#endif
} //----- End of ~AddRectangle


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

