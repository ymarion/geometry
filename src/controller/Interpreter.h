/*************************************************************************
                           Interpreter  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Interface de la classe <Interpreter> (fichier Interpreter.h) ------
#if ! defined ( INTERPRETER_H_ )
#define INTERPRETER_H_

//--------------------------------------------------- Interfaces utilisées
#include <iostream>

#include "Controller.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Interpreter>
//
//
//------------------------------------------------------------------------ 

class Interpreter
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
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


//------------------------------------------------- Surcharge d'opérateurs
    Interpreter & operator = ( const Interpreter & rInterpreter );
    // Not implemented: unauthorized.


//-------------------------------------------- Constructeurs - destructeur
    Interpreter ( const Interpreter & rInterpreter );
    // Not implemented: unauthorized.

    virtual ~Interpreter ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

    Interpreter ( );
    // Because the interpreter is a singleton.

//----------------------------------------------------- Attributs protégés
    Controller & mrController;
    static Interpreter instance;
};

//--------------------------- Autres définitions dépendantes de <Interpreter>

#endif // INTERPRETER_H_

