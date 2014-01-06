/*************************************************************************
                           Drawing  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Interface de la classe <Drawing> (fichier Drawing.h) ------
#if ! defined ( DRAWING_H_ )
#define DRAWING_H_

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Drawing>
//
//
//------------------------------------------------------------------------ 

class Drawing
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
    Drawing & operator = ( const Drawing & unDrawing );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Drawing ( const Drawing & unDrawing );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Drawing ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Drawing ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <Drawing>

#endif // DRAWING_H_

