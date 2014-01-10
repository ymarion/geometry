/*************************************************************************
                           ClearCommand  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <ClearCommand> (file ClearCommand.h) ------
#if ! defined ( CLEARCOMMAND_H_ )
#define CLEARCOMMAND_H_

//-------------------------------------------------------- Interfaces used
#include "AbstractCommand.h"

//-------------------------------------------------------------- Constants 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Class role of <ClearCommand>
//
//
//------------------------------------------------------------------------ 

class ClearCommand : public AbstractCommand
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
    ClearCommand & operator = ( const ClearCommand & aClearCommand );
    // How to use:
    //
    // Contract:
    //


//---------------------------------------------- Constructors - destructor
    ClearCommand ( const ClearCommand & aClearCommand );
    // How to use (copy constructor):
    //
    // Contract:
    //

    ClearCommand ( );
    // How to use:
    //
    // Contract:
    //

    virtual ~ClearCommand ( );
    // How to use:
    //
    // Contract:
    //

//---------------------------------------------------------------- PRIVATE 

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <ClearCommand>

#endif // CLEARCOMMAND_H_

