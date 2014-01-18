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


/*virtual*/ void AddAggregate::Execute ( )
{
	mpAggregate = new Aggregate ( mFigures );
	mrDrawing.AddFigure( mFigureName, new Aggregate( mFigures ) );
} //----- End of Execute

/*virtual*/ void AddAggregate::Undo ( )
{
	mrDrawing.RemoveFigure( mFigureName );
} //----- End of Undo


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AddAggregate::AddAggregate ( Drawing & rDrawing, string const & rParameters )
: AddCommand( rDrawing, false, rParameters )
{
	stringstream ss( mParameters );
	while ( ss.good( ) )
	{
		string figureName;
		ss >> figureName;
		Figure * pFigure = mrDrawing.FindFigure( figureName );
		if ( 0 != pFigure )
		// Figure is found
		{
			mFigures.insert( make_pair( figureName, pFigure ) );
		}
		else if ( !mError )
		// No error yet
		{
			mError = true;
			mErrorMessage = "Figure \"" + figureName + "\" doesn't exist";
			break;
		}
	}
#ifdef DEBUG
	cout << "Calling constructor of <AddAggregate>" << endl;
#endif
} //----- End of AddAggregate


AddAggregate::~AddAggregate ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling destructor of <AddAggregate>" << endl;
#endif
} //----- End of ~AddAggregate


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

