/*************************************************************************
                           AddRectangle  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <AddRectangle> (file AddRectangle.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "AddRectangle.h"

//-------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type AddRectangle::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading


//---------------------------------------------- Constructors - destructor
AddRectangle::AddRectangle ( const AddRectangle & anAddRectangle )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling copy constructor of <AddRectangle>" << endl;
#endif
} //----- End of AddRectangle (copy constructor)


AddRectangle::AddRectangle ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling constructor of <AddRectangle>" << endl;
#endif
} //----- End of AddRectangle


AddRectangle::~AddRectangle ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling destructor of <AddRectangle>" << endl;
#endif
} //----- End of ~AddRectangle


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

