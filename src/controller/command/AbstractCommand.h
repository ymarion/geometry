/*************************************************************************
                           AbstractCommand  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Interface de la classe <AbstractCommand> (fichier AbstractCommand.h) ------
#if ! defined ( ABSTRACTCOMMAND_H_ )
#define ABSTRACTCOMMAND_H_

//--------------------------------------------------- Interfaces utilisées
#include "Command.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <AbstractCommand>
//
//
//------------------------------------------------------------------------ 

class AbstractCommand : Command
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
    AbstractCommand & operator = ( const AbstractCommand & unAbstractCommand );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    AbstractCommand ( const AbstractCommand & unAbstractCommand );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    AbstractCommand ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~AbstractCommand ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <AbstractCommand>

#endif // ABSTRACTCOMMAND_H_

