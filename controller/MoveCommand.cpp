/*************************************************************************
                           MoveCommand  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Réalisation de la classe <MoveCommand> (fichier MoveCommand.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "MoveCommand.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type MoveCommand::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
MoveCommand & MoveCommand::operator = ( const MoveCommand & unMoveCommand )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
MoveCommand::MoveCommand ( const MoveCommand & unMoveCommand )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <MoveCommand>" << endl;
#endif
} //----- Fin de MoveCommand (constructeur de copie)


MoveCommand::MoveCommand ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <MoveCommand>" << endl;
#endif
} //----- Fin de MoveCommand


MoveCommand::~MoveCommand ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <MoveCommand>" << endl;
#endif
} //----- Fin de ~MoveCommand


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

