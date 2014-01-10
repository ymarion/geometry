/*************************************************************************
                           LoadCommand  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <LoadCommand> (file LoadCommand.h) ------
#if ! defined ( LOADCOMMAND_H_ )
#define LOADCOMMAND_H_

//-------------------------------------------------------- Interfaces used
#include "AbstractCommand.h"

//-------------------------------------------------------------- Constants 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Class role of <LoadCommand>
//
//
//------------------------------------------------------------------------ 

class LoadCommand : public AbstractCommand
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
    LoadCommand & operator = ( const LoadCommand & aLoadCommand );
    // How to use:
    //
    // Contract:
    //


//---------------------------------------------- Constructors - destructor
    LoadCommand ( const LoadCommand & aLoadCommand );
    // How to use (copy constructor):
    //
    // Contract:
    //

    LoadCommand ( );
    // How to use:
    //
    // Contract:
    //

    virtual ~LoadCommand ( );
    // How to use:
    //
    // Contract:
    //

//---------------------------------------------------------------- PRIVATE 

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <LoadCommand>

#endif // LOADCOMMAND_H_

