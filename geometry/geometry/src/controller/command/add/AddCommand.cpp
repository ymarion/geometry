/*************************************************************************
                           AddCommand  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <AddCommand> (file AddCommand.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "AddCommand.h"
#include "../../Interpreter.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type AddCommand::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AddCommand::AddCommand ( Drawing & rDrawing, bool validState,
						 string const & rParameters )
: Command ( rDrawing, validState ), mParameters ( rParameters )
, isRedo ( false )
{
	long pos = rParameters.find( Interpreter::DELIMITER );
	mFigureName = rParameters.substr( 0, pos );

	bool error = mrDrawing.FigureExists( mFigureName );
	if ( !mError && error )
	// No error but the last one
	{
		mError = true;
		mErrorMessage = "Figure \"" + mFigureName + "\" already exists";
	}

	mParameters = rParameters.substr( pos + 1 );

#ifdef DEBUG
	cout << "# Calling constructor of <AddCommand>" << endl;
#endif
} //----- End of AddCommand


AddCommand::~AddCommand ( )
{
	if ( !mWasExecuted && !mError )
	{
		mrDrawing.DeleteFigure( mFigureName );
	}
#ifdef DEBUG
	cout << "# Calling destructor of <AddCommand>" << endl;
#endif
} //----- End of ~AddCommand


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods
/*virtual*/ void AddCommand::execute( )
{
	if ( !isRedo )
	{
		mrDrawing.AddFigure( mpFigure );
	}
	else
	{
		mrDrawing.AcknowledgeFigure( mpFigure->GetName( ) );
	}
	isRedo = true;
} //----- End of execute


/*virtual*/ void AddCommand::cancel ( )
{
	mrDrawing.IgnoreFigure( mFigureName );
} //----- End of cancel

