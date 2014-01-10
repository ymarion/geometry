/*************************************************************************
                           DeleteCommand  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <DeleteCommand> (file DeleteCommand.h) ------
#if ! defined ( DELETECOMMAND_H_ )
#define DELETECOMMAND_H_

//-------------------------------------------------------- Interfaces used
#include "AbstractCommand.h"

//-------------------------------------------------------------- Constants 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Class role of <DeleteCommand>
//
//
//------------------------------------------------------------------------ 

class DeleteCommand : public AbstractCommand
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
    DeleteCommand & operator = ( const DeleteCommand & aDeleteCommand );
    // How to use:
    //
    // Contract:
    //


//---------------------------------------------- Constructors - destructor
    DeleteCommand ( const DeleteCommand & aDeleteCommand );
    // How to use (copy constructor):
    //
    // Contract:
    //

    DeleteCommand ( );
    // How to use:
    //
    // Contract:
    //

    virtual ~DeleteCommand ( );
    // How to use:
    //
    // Contract:
    //

//---------------------------------------------------------------- PRIVATE 

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <DeleteCommand>

#endif // DELETECOMMAND_H_

