/*************************************************************************
                           AddAggregate  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Interface de la classe <AddAggregate> (fichier AddAggregate.h) ------
#if ! defined ( ADDAGGREGATE_H_ )
#define ADDAGGREGATE_H_

//--------------------------------------------------- Interfaces utilisées
#include "AddCommand.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <AddAggregate>
//
//
//------------------------------------------------------------------------ 

class AddAggregate : public AddCommand
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
    AddAggregate & operator = ( const AddAggregate & unAddAggregate );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    AddAggregate ( const AddAggregate & unAddAggregate );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    AddAggregate ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~AddAggregate ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <AddAggregate>

#endif // ADDAGGREGATE_H_

