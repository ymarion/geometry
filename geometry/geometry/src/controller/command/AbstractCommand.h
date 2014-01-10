/*************************************************************************
                           AbstractCommand  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <AbstractCommand> (file AbstractCommand.h) ------
#if ! defined ( ABSTRACTCOMMAND_H_ )
#define ABSTRACTCOMMAND_H_

//-------------------------------------------------------- Interfaces used
#include "Command.h"

//-------------------------------------------------------------- Constants 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Class role of <AbstractCommand>
//
//
//------------------------------------------------------------------------ 

class AbstractCommand : Command
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
    AbstractCommand & operator = ( const AbstractCommand & anAbstractCommand );
    // How to use:
    //
    // Contract:
    //


//---------------------------------------------- Constructors - destructor
    AbstractCommand ( const AbstractCommand & anAbstractCommand );
    // How to use (copy constructor):
    //
    // Contract:
    //

    AbstractCommand ( );
    // How to use:
    //
    // Contract:
    //

    virtual ~AbstractCommand ( );
    // How to use:
    //
    // Contract:
    //

//---------------------------------------------------------------- PRIVATE 

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <AbstractCommand>

#endif // ABSTRACTCOMMAND_H_

