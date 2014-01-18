/*************************************************************************
                           LoadCommand  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <LoadCommand> (file LoadCommand.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
#include <sstream>
using namespace std;

//------------------------------------------------------- Personal include
#include "LoadCommand.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type LoadCommand::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


/*virtual*/ void LoadCommand::Execute ( )
{
	// TODO
} //----- End of Execute


/*virtual*/ void LoadCommand::Undo ( )
{
	// TODO
} //----- End of Undo


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
LoadCommand::LoadCommand ( Drawing & rDrawing, string const & rParameters )
: Command( rDrawing, false ), mInFile( rParameters.c_str( ) )
{
	bool error = !mInFile.good( );
	if ( !mError && error )
	{
		mError = true;
		mErrorMessage = "File \"" + rParameters + "\" could not be opened";
	}

#ifdef DEBUG
	cout << "Calling constructor of <LoadCommand>" << endl;
#endif
} //----- End of LoadCommand


LoadCommand::~LoadCommand ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling destructor of <LoadCommand>" << endl;
#endif
} //----- End of ~LoadCommand


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

