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
#include <sstream>
using namespace std;

//------------------------------------------------------- Personal include
#include "AddLine.h"
#include "../../../model/Line.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type AddLine::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AddLine::AddLine ( Drawing & rDrawing, string const & rParameters )
: AddCommand( rDrawing, false, rParameters ), mBegin( 0, 0 ), mEnd( 0, 0 )
{
	stringstream iss( mParameters );
	iss >> mBegin.x;
	iss >> mBegin.y;
	iss >> mEnd.x;
	iss >> mEnd.y;

	bool error = iss.fail( );
	if ( !mError && error )
	{
		mError = true;
		mErrorMessage = "Impossible to parse coordinates";
	}

	mpFigure = new Line( mFigureName, mBegin, mEnd );

#ifdef DEBUG
	cout << "# Calling constructor of <AddLine>" << endl;
#endif
} //----- End of AddLine


AddLine::~AddLine ( )
{
	if ( !mWasExecuted )
	// Was cancelled
	{
		mrDrawing.DeleteFigure( mFigureName );
	}
#ifdef DEBUG
	cout << "# Calling destructor of <AddLine>" << endl;
#endif
} //----- End of ~AddLine


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

