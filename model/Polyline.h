/*************************************************************************
                           Polyline  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Interface de la classe <Polyline> (fichier Polyline.h) ------
#if ! defined ( POLYLINE_H_ )
#define POLYLINE_H_

//--------------------------------------------------- Interfaces utilisées
#include "Figure.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Polyline>
//
//
//------------------------------------------------------------------------ 

class Polyline : public Figure
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
    Polyline & operator = ( const Polyline & unPolyline );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Polyline ( const Polyline & unPolyline );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Polyline ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Polyline ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <Polyline>

#endif // POLYLINE_H_

