/*************************************************************************
                           AddRectangle  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <AddRectangle> (file AddRectangle.h) ------
#if ! defined ( ADDRECTANGLE_H_ )
#define ADDRECTANGLE_H_

//-------------------------------------------------------- Interfaces used
#include "AddCommand.h"

//-------------------------------------------------------------- Constants 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Class role of <AddRectangle>
//
//
//------------------------------------------------------------------------ 

class AddRectangle : public AddCommand
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
    AddRectangle & operator = ( const AddRectangle & anAddRectangle );
    // How to use:
    //
    // Contract:
    //


//---------------------------------------------- Constructors - destructor
    AddRectangle ( const AddRectangle & anAddRectangle );
    // How to use (copy constructor):
    //
    // Contract:
    //

    AddRectangle ( );
    // How to use:
    //
    // Contract:
    //

    virtual ~AddRectangle ( );
    // How to use:
    //
    // Contract:
    //

//---------------------------------------------------------------- PRIVATE 

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <AddRectangle>

#endif // ADDRECTANGLE_H_

