/*************************************************************************
                           Point  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <Point> (file Point.h) ------
#if ! defined ( POINT_H_ )
#define POINT_H_

//-------------------------------------------------------- Interfaces used

//-------------------------------------------------------------- Constants 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Class role of <Point>
//
//
//------------------------------------------------------------------------ 

class Point
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
    Point & operator = ( const Point & aPoint );
    // How to use:
    //
    // Contract:
    //


//---------------------------------------------- Constructors - destructor
    Point ( const Point & aPoint );
    // How to use (copy constructor):
    //
    // Contract:
    //

    Point ( );
    // How to use:
    //
    // Contract:
    //

    virtual ~Point ( );
    // How to use:
    //
    // Contract:
    //

//---------------------------------------------------------------- PRIVATE 

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <Point>

#endif // POINT_H_

