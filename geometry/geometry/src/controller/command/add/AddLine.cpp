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


/*virtual*/ void AddLine::Execute ( Drawing & rDrawing )
{
	rDrawing.AddFigure( mFigureName, new Line( mBegin, mEnd ) );
}

/*virtual*/ void AddLine::Undo ( Drawing & rDrawing )
{
	rDrawing.RemoveFigure( mFigureName );
}


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AddLine::AddLine ( string const & rParameters )
: AddCommand( false, rParameters ), mBegin( 0, 0 ), mEnd( 0, 0 )
{
	stringstream ss( mParameters );
	ss >> mBegin.x;
	ss >> mBegin.y;
	ss >> mEnd.x;
	ss >> mEnd.y;
	mValidState = true;

#ifdef DEBUG
	cout << "Calling constructor of <AddLine>" << endl;
#endif
} //----- End of AddLine


AddLine::~AddLine ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling destructor of <AddLine>" << endl;
#endif
} //----- End of ~AddLine


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

