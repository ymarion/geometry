/*************************************************************************
                           AbstractCommand  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <AbstractCommand> (file AbstractCommand.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "AbstractCommand.h"

//-------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type AbstractCommand::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AbstractCommand::AbstractCommand ( const AbstractCommand & anAbstractCommand )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling copy constructor of <AbstractCommand>" << endl;
#endif
} //----- End of AbstractCommand (copy constructor)


AbstractCommand::AbstractCommand ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling constructor of <AbstractCommand>" << endl;
#endif
} //----- End of AbstractCommand


AbstractCommand::~AbstractCommand ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling destructor of <AbstractCommand>" << endl;
#endif
} //----- End of ~AbstractCommand


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

