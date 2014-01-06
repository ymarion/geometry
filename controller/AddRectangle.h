/*************************************************************************
                           AddRectangle  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Interface de la classe <AddRectangle> (fichier AddRectangle.h) ------
#if ! defined ( ADDRECTANGLE_H_ )
#define ADDRECTANGLE_H_

//--------------------------------------------------- Interfaces utilisées
#include "AddCommand.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <AddRectangle>
//
//
//------------------------------------------------------------------------ 

class AddRectangle : public AddCommand
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
    AddRectangle & operator = ( const AddRectangle & unAddRectangle );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    AddRectangle ( const AddRectangle & unAddRectangle );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    AddRectangle ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~AddRectangle ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <AddRectangle>

#endif // ADDRECTANGLE_H_

