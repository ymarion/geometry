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


Command * CommandFactory::NewAddAggregate( Drawing & rDrawing,
										   string const & rParameters ) const
{
	return new AddAggregate( rDrawing, rParameters );
} //----- End of NewAddAggregate


Command * CommandFactory::NewAddCircle( Drawing & rDrawing,
									    string const & rParameters ) const
{
	return new AddCircle( rDrawing, rParameters );
} //----- End of NewAddCircle


Command * CommandFactory::NewAddLine( Drawing & rDrawing,
									  string const & rParameters ) const
{
	return new AddLine( rDrawing, rParameters );
} //----- End of NewAddLine


Command * CommandFactory::NewAddPolyline( Drawing & rDrawing,
										  string const & rParameters ) const
{
	return new AddPolyline( rDrawing, rParameters );
} //----- End of NewAddPolyline


Command * CommandFactory::NewAddRectangle( Drawing & rDrawing,
										   string const & rParameters ) const
{
	return new AddRectangle( rDrawing, rParameters );
} //----- End of NewAddRectangle


Command * CommandFactory::NewMoveCommand( Drawing & rDrawing,
										  string const & rParameters ) const
{
	return new MoveCommand( rDrawing, rParameters );
} //----- End of NewMoveCommand


Command * CommandFactory::NewDeleteCommand( Drawing & rDrawing,
										    string const & rParameters ) const
{
	return new DeleteCommand( rDrawing, rParameters );
} //----- End of NewDeleteCommand


Command * CommandFactory::NewClearCommand( Drawing & rDrawing,
										   string const & rParameters ) const
{
	return new ClearCommand( rDrawing, rParameters );
} //----- End of NewClearCommand


Command * CommandFactory::NewLoadCommand( Drawing & rDrawing,
										  string const & rParameters ) const
{
	return new LoadCommand( rDrawing, rParameters );
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

