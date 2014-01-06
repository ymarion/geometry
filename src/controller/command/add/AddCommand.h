/*************************************************************************
                           AddCommand  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Interface de la classe <AddCommand> (fichier AddCommand.h) ------
#if ! defined ( ADDCOMMAND_H_ )
#define ADDCOMMAND_H_

//--------------------------------------------------- Interfaces utilisées
#include "../AbstractCommand.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <AddCommand>
//
//
//------------------------------------------------------------------------ 

class AddCommand : public AbstractCommand
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
    AddCommand & operator = ( const AddCommand & unAddCommand );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    AddCommand ( const AddCommand & unAddCommand );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    AddCommand ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~AddCommand ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <AddCommand>

#endif // ADDCOMMAND_H_

