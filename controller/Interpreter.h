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
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------- Surcharge d'opérateurs
    Interpreter & operator = ( const Interpreter & unInterpreter );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Interpreter ( const Interpreter & unInterpreter );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Interpreter ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Interpreter ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <Interpreter>

#endif // INTERPRETER_H_

