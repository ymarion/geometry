/*************************************************************************
                           MoveCommand  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Interface de la classe <MoveCommand> (fichier MoveCommand.h) ------
#if ! defined ( MOVECOMMAND_H_ )
#define MOVECOMMAND_H_

//--------------------------------------------------- Interfaces utilisées
#include "AbstractCommand.h"

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <MoveCommand>
//
//
//------------------------------------------------------------------------ 

class MoveCommand : public AbstractCommand
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
    MoveCommand & operator = ( const MoveCommand & unMoveCommand );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    MoveCommand ( const MoveCommand & unMoveCommand );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    MoveCommand ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~MoveCommand ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <MoveCommand>

#endif // MOVECOMMAND_H_

