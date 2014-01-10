/*************************************************************************
                           Aggregate  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <Aggregate> (file Aggregate.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "Aggregate.h"

//-------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type Aggregate::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
Aggregate::Aggregate ( const Aggregate & anAggregate )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling copy constructor of <Aggregate>" << endl;
#endif
} //----- End of Aggregate (copy constructor)


Aggregate::Aggregate ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling constructor of <Aggregate>" << endl;
#endif
} //----- End of Aggregate


Aggregate::~Aggregate ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling destructor of <Aggregate>" << endl;
#endif
} //----- End of ~Aggregate


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods
