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


/*virtual*/ void AddRectangle::Execute ( )
{
	mrDrawing.AddFigure( mFigureName, new Rectangle( mBegin, mEnd ) );
} //----- End of Execute


/*virtual*/ void AddRectangle::Undo ( )
{
	mrDrawing.RemoveFigure( mFigureName );
} //----- End of Undo


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AddRectangle::AddRectangle ( Drawing & rDrawing, string const & rParameters )
: AddCommand( rDrawing, false, rParameters ), mBegin( 0, 0 ), mEnd( 0, 0 )
{
	istringstream iss( mParameters );
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

