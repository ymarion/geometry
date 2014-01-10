/*************************************************************************
                           AddCircle  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <AddCircle> (file AddCircle.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "AddCircle.h"

//-------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type AddCircle::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
AddCircle::AddCircle ( const AddCircle & anAddCircle )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling copy constructor of <AddCircle>" << endl;
#endif
} //----- End of AddCircle (copy constructor)


AddCircle::AddCircle ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling constructor of <AddCircle>" << endl;
#endif
} //----- End of AddCircle


AddCircle::~AddCircle ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling destructor of <AddCircle>" << endl;
#endif
} //----- End of ~AddCircle


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

