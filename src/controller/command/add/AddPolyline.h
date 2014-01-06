/*************************************************************************
                           AddPolyline  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Interface de la classe <AddPolyline> (fichier AddPolyline.h) ------
#if ! defined ( ADDPOLYLINE_H_ )
#define ADDPOLYLINE_H_

//--------------------------------------------------- Interfaces utilisées
#include "AddCommand.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <AddPolyline>
//
//
//------------------------------------------------------------------------ 

class AddPolyline : public AddCommand
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
    AddPolyline & operator = ( const AddPolyline & unAddPolyline );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    AddPolyline ( const AddPolyline & unAddPolyline );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    AddPolyline ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~AddPolyline ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <AddPolyline>

#endif // ADDPOLYLINE_H_

