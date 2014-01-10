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
using namespace std;

//------------------------------------------------------- Personal include
#include "AddAggregate.h"

//-------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type AddAggregate::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AddAggregate::AddAggregate ( const AddAggregate & anAddAggregate )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling copy constructor of <AddAggregate>" << endl;
#endif
} //----- End of AddAggregate (copy constructor)


AddAggregate::AddAggregate ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling constructor of <AddAggregate>" << endl;
#endif
} //----- End of AddAggregate


AddAggregate::~AddAggregate ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling destructor of <AddAggregate>" << endl;
#endif
} //----- End of ~AddAggregate


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

