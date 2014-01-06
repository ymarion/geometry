/*************************************************************************
                           Aggregate  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Réalisation de la classe <Aggregate> (fichier Aggregate.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Aggregate.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Aggregate::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
Aggregate & Aggregate::operator = ( const Aggregate & unAggregate )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Aggregate::Aggregate ( const Aggregate & unAggregate )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Aggregate>" << endl;
#endif
} //----- Fin de Aggregate (constructeur de copie)


Aggregate::Aggregate ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Aggregate>" << endl;
#endif
} //----- Fin de Aggregate


Aggregate::~Aggregate ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Aggregate>" << endl;
#endif
} //----- Fin de ~Aggregate


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

