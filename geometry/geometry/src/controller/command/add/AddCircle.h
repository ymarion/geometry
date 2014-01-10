/*************************************************************************
                           AddCircle  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <AddCircle> (file AddCircle.h) ------
#if ! defined ( ADDCIRCLE_H_ )
#define ADDCIRCLE_H_

//-------------------------------------------------------- Interfaces used
#include "AddCommand.h"

//-------------------------------------------------------------- Constants 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Class role of <AddCircle>
//
//
//------------------------------------------------------------------------ 

class AddCircle : public AddCommand
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
    AddCircle & operator = ( const AddCircle & anAddCircle );
    // How to use:
    //
    // Contract:
    //


//---------------------------------------------- Constructors - destructor
    AddCircle ( const AddCircle & anAddCircle );
    // How to use (copy constructor):
    //
    // Contract:
    //

    AddCircle ( );
    // How to use:
    //
    // Contract:
    //

    virtual ~AddCircle ( );
    // How to use:
    //
    // Contract:
    //

//---------------------------------------------------------------- PRIVATE 

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <AddCircle>

#endif // ADDCIRCLE_H_

