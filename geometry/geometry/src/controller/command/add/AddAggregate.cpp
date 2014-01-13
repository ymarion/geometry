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


/*virtual*/ void AddAggregate::Execute ( Drawing & rDrawing )
{
	rDrawing.AddFigure( mFigureName, new Aggregate( mAggregateFig ) );
}

/*virtual*/ void AddAggregate::Undo ( Drawing & rDrawing )
{
	rDrawing.RemoveFigure( mFigureName );
}


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AddAggregate::AddAggregate ( string const & rParameters )
: AddCommand( false, rParameters )
{
	stringstream ss( mParameters );
	while ( ss.good( ) )
	{
		string fName;
		ss >> fName;
		mAggregateFig.push_back( fName );
	}
	mValidState = true;
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

