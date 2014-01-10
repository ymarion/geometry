/*************************************************************************
                           AddLine  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <AddLine> (file AddLine.h) ------
#if ! defined ( ADDLINE_H_ )
#define ADDLINE_H_

//-------------------------------------------------------- Interfaces used
#include "AddCommand.h"

//-------------------------------------------------------------- Constants 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Class role of <AddLine>
//
//
//------------------------------------------------------------------------ 

class AddLine : public AddCommand
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
    AddLine & operator = ( const AddLine & anAddLine );
    // How to use:
    //
    // Contract:
    //


//---------------------------------------------- Constructors - destructor
    AddLine ( const AddLine & anAddLine );
    // How to use (copy constructor):
    //
    // Contract:
    //

    AddLine ( );
    // How to use:
    //
    // Contract:
    //

    virtual ~AddLine ( );
    // How to use:
    //
    // Contract:
    //

//---------------------------------------------------------------- PRIVATE 

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <AddLine>

#endif // ADDLINE_H_

