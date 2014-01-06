/*************************************************************************
                           ClearCommand  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Interface de la classe <ClearCommand> (fichier ClearCommand.h) ------
#if ! defined ( CLEARCOMMAND_H_ )
#define CLEARCOMMAND_H_

//--------------------------------------------------- Interfaces utilisées
#include "AbstractCommand.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <ClearCommand>
//
//
//------------------------------------------------------------------------ 

class ClearCommand : public AbstractCommand
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
    ClearCommand & operator = ( const ClearCommand & unClearCommand );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    ClearCommand ( const ClearCommand & unClearCommand );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    ClearCommand ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~ClearCommand ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <ClearCommand>

#endif // CLEARCOMMAND_H_

