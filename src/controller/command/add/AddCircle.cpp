/*************************************************************************
                           AddCircle  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Réalisation de la classe <AddCircle> (fichier AddCircle.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "AddCircle.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type AddCircle::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
AddCircle::AddCircle ( const AddCircle & unAddCircle )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <AddCircle>" << endl;
#endif
} //----- Fin de AddCircle (constructeur de copie)


AddCircle::AddCircle ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <AddCircle>" << endl;
#endif
} //----- Fin de AddCircle


AddCircle::~AddCircle ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <AddCircle>" << endl;
#endif
} //----- Fin de ~AddCircle


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

