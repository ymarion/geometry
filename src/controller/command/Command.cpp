/*************************************************************************
                           Command  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Réalisation de la classe <Command> (fichier Command.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Command.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Command::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Command::Command ( const Command & unCommand )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Command>" << endl;
#endif
} //----- Fin de Command (constructeur de copie)


Command::Command ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Command>" << endl;
#endif
} //----- Fin de Command


Command::~Command ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Command>" << endl;
#endif
} //----- Fin de ~Command


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
