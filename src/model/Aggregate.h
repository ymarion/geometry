/*************************************************************************
                           Aggregate  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Interface de la classe <Aggregate> (fichier Aggregate.h) ------
#if ! defined ( AGGREGATE_H_ )
#define AGGREGATE_H_

//--------------------------------------------------- Interfaces utilisées
#include "Figure.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Aggregate>
//
//
//------------------------------------------------------------------------ 

class Aggregate : public Figure
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
    Aggregate & operator = ( const Aggregate & unAggregate );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Aggregate ( const Aggregate & unAggregate );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Aggregate ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Aggregate ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <Aggregate>

#endif // AGGREGATE_H_

