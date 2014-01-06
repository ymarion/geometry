/*************************************************************************
                           AddCircle  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Interface de la classe <AddCircle> (fichier AddCircle.h) ------
#if ! defined ( ADDCIRCLE_H_ )
#define ADDCIRCLE_H_

//--------------------------------------------------- Interfaces utilisées
#include "AddCommand.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <AddCircle>
//
//
//------------------------------------------------------------------------ 

class AddCircle : public AddCommand
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
    AddCircle & operator = ( const AddCircle & unAddCircle );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    AddCircle ( const AddCircle & unAddCircle );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    AddCircle ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~AddCircle ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <AddCircle>

#endif // ADDCIRCLE_H_

