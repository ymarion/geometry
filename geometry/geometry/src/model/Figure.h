/*************************************************************************
                           Figure  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <Figure> (file Figure.h) ------
#if ! defined ( FIGURE_H_ )
#define FIGURE_H_

//-------------------------------------------------------- Interfaces used

//-------------------------------------------------------------- Constants 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Class role of <Figure>
//
//
//------------------------------------------------------------------------ 

class Figure
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
    Figure & operator = ( const Figure & aFigure );
    // How to use:
    //
    // Contract:
    //


//---------------------------------------------- Constructors - destructor
    Figure ( const Figure & aFigure );
    // How to use (copy constructor):
    //
    // Contract:
    //

    Figure ( );
    // How to use:
    //
    // Contract:
    //

    virtual ~Figure ( );
    // How to use:
    //
    // Contract:
    //

//---------------------------------------------------------------- PRIVATE 

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <Figure>

#endif // FIGURE_H_

