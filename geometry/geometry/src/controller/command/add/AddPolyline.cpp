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


/*virtual*/ void AddPolyline::Execute ( Drawing & rDrawing )
{
	rDrawing.AddFigure( mFigureName, new Polyline( mPointList ) );
}

/*virtual*/ void AddPolyline::Undo ( Drawing & rDrawing )
{
	rDrawing.RemoveFigure( mFigureName );
}


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AddPolyline::AddPolyline ( string const & rParameters )
: AddCommand( false, rParameters )
{
	stringstream ss( mParameters );
	long x, y;
	while ( ss.good() )
	{
		ss >> x;
		ss >> y;
		Point aPoint( x, y );
		mPointList.push_back(aPoint);
	}
	mValidState = true;

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

