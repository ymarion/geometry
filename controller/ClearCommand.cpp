/*************************************************************************
                           ClearCommand  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Réalisation de la classe <ClearCommand> (fichier ClearCommand.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "ClearCommand.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type ClearCommand::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
ClearCommand & ClearCommand::operator = ( const ClearCommand & unClearCommand )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
ClearCommand::ClearCommand ( const ClearCommand & unClearCommand )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ClearCommand>" << endl;
#endif
} //----- Fin de ClearCommand (constructeur de copie)


ClearCommand::ClearCommand ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <ClearCommand>" << endl;
#endif
} //----- Fin de ClearCommand


ClearCommand::~ClearCommand ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <ClearCommand>" << endl;
#endif
} //----- Fin de ~ClearCommand


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

