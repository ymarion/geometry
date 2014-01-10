/*************************************************************************
                           ViewFigure  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <ViewFigure> (file ViewFigure.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "ViewFigure.h"

//-------------------------------------------------------------- Constants

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type ViewFigure::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
ViewFigure::ViewFigure ( const ViewFigure & aViewFigure )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling copy constructor of <ViewFigure>" << endl;
#endif
} //----- End of ViewFigure (copy constructor)


ViewFigure::ViewFigure ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling constructor of <ViewFigure>" << endl;
#endif
} //----- End of ViewFigure


ViewFigure::~ViewFigure ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Calling destructor of <ViewFigure>" << endl;
#endif
} //----- End of ~ViewFigure


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods

