/*************************************************************************
                           DeleteCommand  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Interface de la classe <DeleteCommand> (fichier DeleteCommand.h) ------
#if ! defined ( DELETECOMMAND_H_ )
#define DELETECOMMAND_H_

//--------------------------------------------------- Interfaces utilisées
#include "AbstractCommand.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <DeleteCommand>
//
//
//------------------------------------------------------------------------ 

class DeleteCommand : public AbstractCommand
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
    DeleteCommand & operator = ( const DeleteCommand & unDeleteCommand );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    DeleteCommand ( const DeleteCommand & unDeleteCommand );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    DeleteCommand ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~DeleteCommand ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <DeleteCommand>

#endif // DELETECOMMAND_H_

