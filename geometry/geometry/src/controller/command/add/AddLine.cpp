/*************************************************************************
                           AddLine  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <AddLine> (file AddLine.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "AddLine.h"

//-------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type AddLine::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AddLine::AddLine ( const AddLine & anAddLine )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling copy constructor of <AddLine>" << endl;
#endif
} //----- End of AddLine (copy constructor)


AddLine::AddLine ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling constructor of <AddLine>" << endl;
#endif
} //----- End of AddLine


AddLine::~AddLine ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling destructor of <AddLine>" << endl;
#endif
} //----- End of ~AddLine


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

