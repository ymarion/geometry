/*************************************************************************
                        CommandFactory  -  description
                             -------------------
    begin                : Jan 12 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <CommandFactory> (file CommandFactory.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "CommandFactory.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type CommandFactory::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


Command * CommandFactory::NewAddAggregate( string const & rParameters ) const
{
	return new AddAggregate( rParameters );
} //----- End of NewAddAggregate


Command * CommandFactory::NewAddCircle( string const & rParameters ) const
{
	return new AddCircle( rParameters );
} //----- End of NewAddCircle


Command * CommandFactory::NewAddLine( string const & rParameters ) const
{
	return new AddLine( rParameters );
} //----- End of NewAddLine


Command * CommandFactory::NewAddPolyline( string const & rParameters ) const
{
	return new AddPolyline( rParameters );
} //----- End of NewAddPolyline


Command * CommandFactory::NewAddRectangle( string const & rParameters ) const
{
	return new AddRectangle( rParameters );
} //----- End of NewAddRectangle


Command * CommandFactory::NewMoveCommand( string const & rParameters ) const
{
	return new MoveCommand( rParameters );
} //----- End of NewMoveCommand


Command * CommandFactory::NewDeleteCommand( string const & rParameters ) const
{
	return new DeleteCommand( rParameters );
} //----- End of NewDeleteCommand


Command * CommandFactory::NewClearCommand( string const & rParameters ) const
{
	return new ClearCommand( rParameters );
} //----- End of NewClearCommand


Command * CommandFactory::NewLoadCommand( string const & rParameters ) const
{
	return new LoadCommand( rParameters );
} //----- End of NewLoadCommand


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
CommandFactory::CommandFactory ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling constructor of <CommandFactory>" << endl;
#endif
} //----- End of CommandFactory


CommandFactory::~CommandFactory ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling destructor of <CommandFactory>" << endl;
#endif
} //----- End of ~CommandFactory


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

