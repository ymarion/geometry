/*************************************************************************
                           LoadCommand  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Réalisation de la classe <LoadCommand> (fichier LoadCommand.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "LoadCommand.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type LoadCommand::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur
LoadCommand::LoadCommand ( const LoadCommand & unLoadCommand )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <LoadCommand>" << endl;
#endif
} //----- Fin de LoadCommand (constructeur de copie)


LoadCommand::LoadCommand ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <LoadCommand>" << endl;
#endif
} //----- Fin de LoadCommand


LoadCommand::~LoadCommand ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <LoadCommand>" << endl;
#endif
} //----- Fin de ~LoadCommand


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

