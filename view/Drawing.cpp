/*************************************************************************
                           Drawing  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Réalisation de la classe <Drawing> (fichier Drawing.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Drawing.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Drawing::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Drawing::Drawing ( const Drawing & unDrawing )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Drawing>" << endl;
#endif
} //----- Fin de Drawing (constructeur de copie)


Drawing::Drawing ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Drawing>" << endl;
#endif
} //----- Fin de Drawing


Drawing::~Drawing ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Drawing>" << endl;
#endif
} //----- Fin de ~Drawing


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

