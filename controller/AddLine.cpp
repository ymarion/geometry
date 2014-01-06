/*************************************************************************
                           AddLine  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Réalisation de la classe <AddLine> (fichier AddLine.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "AddLine.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type AddLine::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
AddLine::AddLine ( const AddLine & unAddLine )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <AddLine>" << endl;
#endif
} //----- Fin de AddLine (constructeur de copie)


AddLine::AddLine ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <AddLine>" << endl;
#endif
} //----- Fin de AddLine


AddLine::~AddLine ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <AddLine>" << endl;
#endif
} //----- Fin de ~AddLine


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

