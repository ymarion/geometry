/*************************************************************************
                           ViewFigure  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Interface de la classe <ViewFigure> (fichier ViewFigure.h) ------
#if ! defined ( VIEWFIGURE_H_ )
#define VIEWFIGURE_H_

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <ViewFigure>
//
//
//------------------------------------------------------------------------ 

class ViewFigure
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
    ViewFigure & operator = ( const ViewFigure & unViewFigure );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    ViewFigure ( const ViewFigure & unViewFigure );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    ViewFigure ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~ViewFigure ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <ViewFigure>

#endif // VIEWFIGURE_H_

