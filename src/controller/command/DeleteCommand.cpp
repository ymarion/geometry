/*************************************************************************
                           DeleteCommand  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Réalisation de la classe <DeleteCommand> (fichier DeleteCommand.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "DeleteCommand.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type DeleteCommand::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
DeleteCommand::DeleteCommand ( const DeleteCommand & unDeleteCommand )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <DeleteCommand>" << endl;
#endif
} //----- Fin de DeleteCommand (constructeur de copie)


DeleteCommand::DeleteCommand ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <DeleteCommand>" << endl;
#endif
} //----- Fin de DeleteCommand


DeleteCommand::~DeleteCommand ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <DeleteCommand>" << endl;
#endif
} //----- Fin de ~DeleteCommand


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

