/*************************************************************************
                           Interpreter  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <Interpreter> (file Interpreter.h) ------
#if ! defined ( INTERPRETER_H_ )
#define INTERPRETER_H_

//-------------------------------------------------------- Interfaces used
#include <iostream>

#include "Controller.h"

//-------------------------------------------------------------- Constants 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Class role of <Interpreter>
//
//
//------------------------------------------------------------------------ 

class Interpreter
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods
    // type Method ( parameter list );
    // How to use:
    //
    // Contract :
    //

    void Interpret ( std::istream & rStream );
    // How to use:
    //
    // Contract :
    //

	static Interpreter & GetInstance ( );
	// How to use:
	// Returns the single instance of the interpreter.


//--------------------------------------------------- Operator overloading
    Interpreter & operator = ( const Interpreter & rInterpreter );
    // Not implemented: unauthorized.


//---------------------------------------------- Constructors - destructor
    Interpreter ( const Interpreter & rInterpreter );
    // Not implemented: unauthorized.

    virtual ~Interpreter ( );
    // How to use:
    //
    // Contract:
    //

//---------------------------------------------------------------- PRIVATE 

protected:
//------------------------------------------------------ Protected methods

    Interpreter ( );
    // Because the interpreter is a singleton.

//--------------------------------------------------- Protected attributes
    Controller & mrController;
    static Interpreter instance;
};

//------------------------------ Other definitions depending on <Interpreter>

#endif // INTERPRETER_H_

