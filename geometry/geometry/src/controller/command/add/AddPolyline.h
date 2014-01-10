/*************************************************************************
                           AddPolyline  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <AddPolyline> (file AddPolyline.h) ------
#if ! defined ( ADDPOLYLINE_H_ )
#define ADDPOLYLINE_H_

//-------------------------------------------------------- Interfaces used
#include "AddCommand.h"

//-------------------------------------------------------------- Constants 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Class role of <AddPolyline>
//
//
//------------------------------------------------------------------------ 

class AddPolyline : public AddCommand
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
    AddPolyline & operator = ( const AddPolyline & anAddPolyline );
    // How to use:
    //
    // Contract:
    //


//---------------------------------------------- Constructors - destructor
    AddPolyline ( const AddPolyline & anAddPolyline );
    // How to use (copy constructor):
    //
    // Contract:
    //

    AddPolyline ( );
    // How to use:
    //
    // Contract:
    //

    virtual ~AddPolyline ( );
    // How to use:
    //
    // Contract:
    //

//---------------------------------------------------------------- PRIVATE 

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <AddPolyline>

#endif // ADDPOLYLINE_H_
