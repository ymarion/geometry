/*************************************************************************
                           AddCommand  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Réalisation de la classe <AddCommand> (fichier AddCommand.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "AddCommand.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type AddCommand::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
AddCommand & AddCommand::operator = ( const AddCommand & unAddCommand )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
AddCommand::AddCommand ( const AddCommand & unAddCommand )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <AddCommand>" << endl;
#endif
} //----- Fin de AddCommand (constructeur de copie)


AddCommand::AddCommand ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <AddCommand>" << endl;
#endif
} //----- Fin de AddCommand


AddCommand::~AddCommand ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <AddCommand>" << endl;
#endif
} //----- Fin de ~AddCommand


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

