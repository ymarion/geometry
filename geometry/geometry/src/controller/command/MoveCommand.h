/*************************************************************************
                           MoveCommand  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <MoveCommand> (file MoveCommand.h) ------
#if ! defined ( MOVECOMMAND_H_ )
#define MOVECOMMAND_H_

//-------------------------------------------------------- Interfaces used
#include "AbstractCommand.h"

//-------------------------------------------------------------- Constants 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Class role of <MoveCommand>
//
//
//------------------------------------------------------------------------ 

class MoveCommand : public AbstractCommand
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
    MoveCommand & operator = ( const MoveCommand & aMoveCommand );
    // How to use:
    //
    // Contract:
    //


//---------------------------------------------- Constructors - destructor
    MoveCommand ( const MoveCommand & aMoveCommand );
    // How to use (copy constructor):
    //
    // Contract:
    //

    MoveCommand ( );
    // How to use:
    //
    // Contract:
    //

    virtual ~MoveCommand ( );
    // How to use:
    //
    // Contract:
    //

//---------------------------------------------------------------- PRIVATE 

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <MoveCommand>

#endif // MOVECOMMAND_H_

