/*************************************************************************
                           AddAggregate  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <AddAggregate> (file AddAggregate.h) ------
#if ! defined ( ADDAGGREGATE_H_ )
#define ADDAGGREGATE_H_

//-------------------------------------------------------- Interfaces used
#include "AddCommand.h"

//-------------------------------------------------------------- Constants 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Class role of <AddAggregate>
//
//
//------------------------------------------------------------------------ 

class AddAggregate : public AddCommand
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
    AddAggregate & operator = ( const AddAggregate & anAddAggregate );
    // How to use:
    //
    // Contract:
    //


//---------------------------------------------- Constructors - destructor
    AddAggregate ( const AddAggregate & anAddAggregate );
    // How to use (copy constructor):
    //
    // Contract:
    //

    AddAggregate ( );
    // How to use:
    //
    // Contract:
    //

    virtual ~AddAggregate ( );
    // How to use:
    //
    // Contract:
    //

//---------------------------------------------------------------- PRIVATE 

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <AddAggregate>

#endif // ADDAGGREGATE_H_

