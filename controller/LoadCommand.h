/*************************************************************************
                           LoadCommand  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Interface de la classe <LoadCommand> (fichier LoadCommand.h) ------
#if ! defined ( LOADCOMMAND_H_ )
#define LOADCOMMAND_H_

//--------------------------------------------------- Interfaces utilisées
#include "AbstractCommand.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <LoadCommand>
//
//
//------------------------------------------------------------------------ 

class LoadCommand : public AbstractCommand
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
    LoadCommand & operator = ( const LoadCommand & unLoadCommand );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    LoadCommand ( const LoadCommand & unLoadCommand );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    LoadCommand ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~LoadCommand ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <LoadCommand>

#endif // LOADCOMMAND_H_

