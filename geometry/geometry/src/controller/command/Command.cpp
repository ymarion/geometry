/*************************************************************************
                           Command  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <Command> (file Command.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "Command.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type Command::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


bool Command::isValid ( ) const
{
	return !mError;
} //----- End of isValid


string const & Command::ErrorMessage ( ) const
{
	return mErrorMessage;
} //----- End of ErrorMessage


void Command::SetCommentOk( bool commentOk )
{
	mCommentOk = commentOk;
} //----- End of SetCommentOk


void Command::Do ( )
{
	if ( !mWasExecuted && !mError )
	{
		execute( );
		mWasExecuted = true;
		cout << ( mCommentOk ? "# " : "" ) <<"OK" << endl;
	}
} //----- End of Do


void Command::Undo ( )
{
	if ( mWasExecuted && !mError )
	{
		cancel( );
		mWasExecuted = false;
		cout << ( mCommentOk ? "# " : "" ) <<"OK" << endl;
	}
} //----- End of Undo


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
Command::Command ( Drawing & rDrawing, bool validState, bool executed )
: mError( validState ), mrDrawing( rDrawing ), mWasExecuted( executed ),
  mCommentOk( false )
{
#ifdef DEBUG
	cout << "# Calling constructor of <Command>" << endl;
#endif
} //----- End of Command


Command::~Command ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "# Calling destructor of <Command>" << endl;
#endif
} //----- End of ~Command


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

