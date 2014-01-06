/*************************************************************************
                           AddAggregate  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Réalisation de la classe <AddAggregate> (fichier AddAggregate.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "AddAggregate.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type AddAggregate::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
AddAggregate & AddAggregate::operator = ( const AddAggregate & unAddAggregate )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
AddAggregate::AddAggregate ( const AddAggregate & unAddAggregate )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <AddAggregate>" << endl;
#endif
} //----- Fin de AddAggregate (constructeur de copie)


AddAggregate::AddAggregate ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <AddAggregate>" << endl;
#endif
} //----- Fin de AddAggregate


AddAggregate::~AddAggregate ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <AddAggregate>" << endl;
#endif
} //----- Fin de ~AddAggregate


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

