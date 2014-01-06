/*************************************************************************
                           AddRectangle  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Réalisation de la classe <AddRectangle> (fichier AddRectangle.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "AddRectangle.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type AddRectangle::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur
AddRectangle::AddRectangle ( const AddRectangle & unAddRectangle )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <AddRectangle>" << endl;
#endif
} //----- Fin de AddRectangle (constructeur de copie)


AddRectangle::AddRectangle ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <AddRectangle>" << endl;
#endif
} //----- Fin de AddRectangle


AddRectangle::~AddRectangle ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <AddRectangle>" << endl;
#endif
} //----- Fin de ~AddRectangle


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

