/*************************************************************************
                           AddAggregate  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <AddAggregate> (file AddAggregate.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
#include <sstream>
using namespace std;

//------------------------------------------------------- Personal include
#include "AddAggregate.h"
#include "../../../model/Aggregate.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type AddAggregate::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AddAggregate::AddAggregate ( Drawing & rDrawing, string const & rParameters )
: AddCommand( rDrawing, false, rParameters )
{
	stringstream ss( mParameters );
	while ( ss.good( ) && !mError )
	{
		string figureName;
		ss >> figureName;
		Figure * pFigure = mrDrawing.GetFigure( figureName );
		if ( 0 != pFigure )
		// Figure is found
		{
			mFigures.insert( pFigure );
			// The figure should not be ignored
		}
		else if ( !mError )
		// No error until this one
		{
			mError = true;
			mErrorMessage = "Figure \"" + figureName + "\" doesn't exist";
		}
	}
	mpFigure = new Aggregate( mFigureName, mFigures );

#ifdef DEBUG
	cout << "# Calling constructor of <AddAggregate>" << endl;
#endif
} //----- End of AddAggregate


AddAggregate::~AddAggregate ( )
{
#ifdef DEBUG
	cout << "# Calling destructor of <AddAggregate>" << endl;
#endif
} //----- End of ~AddAggregate


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

