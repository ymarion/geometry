/*************************************************************************
                           Rectangle  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <Rectangle> (file Rectangle.h) ------
#if ! defined ( RECTANGLE_H_ )
#define RECTANGLE_H_

//-------------------------------------------------------- Interfaces used
#include "Figure.h"

//-------------------------------------------------------------- Constants 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Class role of <Rectangle>
//
//
//------------------------------------------------------------------------ 

class Rectangle : public Figure
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods
    // type Method ( parameter list );
    // How to use:
    //
    // Contract:
    //


//--------------------------------------------------- Operator overloading
    Rectangle & operator = ( const Rectangle & aRectangle );
    // How to use:
    //
    // Contract:
    //


//---------------------------------------------- Constructors - destructor
    Rectangle ( const Rectangle & aRectangle );
    // How to use (copy constructor):
    //
    // Contract:
    //

    Rectangle ( );
    // How to use:
    //
    // Contract:
    //

    virtual ~Rectangle ( );
    // How to use:
    //
    // Contract:
    //

//---------------------------------------------------------------- PRIVATE 

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <Rectangle>

#endif // RECTANGLE_H_

