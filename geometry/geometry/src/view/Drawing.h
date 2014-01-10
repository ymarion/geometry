/*************************************************************************
                           Drawing  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <Drawing> (file Drawing.h) ------
#if ! defined ( DRAWING_H_ )
#define DRAWING_H_

//-------------------------------------------------------- Interfaces used

//-------------------------------------------------------------- Constants 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Class role of <Drawing>
//
//
//------------------------------------------------------------------------ 

class Drawing
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
    Drawing & operator = ( const Drawing & aDrawing );
    // How to use:
    //
    // Contract:
    //


//---------------------------------------------- Constructors - destructor
    Drawing ( const Drawing & aDrawing );
    // How to use (copy constructor):
    //
    // Contract:
    //

    Drawing ( );
    // How to use:
    //
    // Contract:
    //

    virtual ~Drawing ( );
    // How to use:
    //
    // Contract:
    //

//---------------------------------------------------------------- PRIVATE 

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <Drawing>

#endif // DRAWING_H_

