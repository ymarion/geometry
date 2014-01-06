/*************************************************************************
                           AddLine  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Interface de la classe <AddLine> (fichier AddLine.h) ------
#if ! defined ( ADDLINE_H_ )
#define ADDLINE_H_

//--------------------------------------------------- Interfaces utilisées
#include "AddCommand.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <AddLine>
//
//
//------------------------------------------------------------------------ 

class AddLine : public AddCommand
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
    AddLine & operator = ( const AddLine & unAddLine );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    AddLine ( const AddLine & unAddLine );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    AddLine ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~AddLine ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <AddLine>

#endif // ADDLINE_H_

