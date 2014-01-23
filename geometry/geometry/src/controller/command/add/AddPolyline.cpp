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
#include <sstream>
using namespace std;

//------------------------------------------------------- Personal include
#include "AddPolyline.h"
#include "../../../model/Polyline.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type AddPolyline::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AddPolyline::AddPolyline ( Drawing & rDrawing, string const & rParameters )
: AddCommand( rDrawing, false, rParameters )
{
	istringstream iss( mParameters );
	long x, y;
	bool error = true;
	while ( iss.good() )
	{
		iss >> x;
		iss >> y;

		error = iss.fail( );
		if ( !mError && error )
		{
			mError = true;
			mErrorMessage = "Impossible to parse coordinates";
			break;
		}

		Point aPoint( x, y );
		mPointList.push_back(aPoint);
	}
	mpFigure = new Polyline( mFigureName, mPointList );

#ifdef DEBUG
	cout << "# Calling constructor of <AddPolyline>" << endl;
#endif
} //----- End of AddPolyline


AddPolyline::~AddPolyline ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "# Calling destructor of <AddPolyline>" << endl;
#endif
} //----- End of ~AddPolyline


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

