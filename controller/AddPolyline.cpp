/*************************************************************************
                           AddPolyline  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Réalisation de la classe <AddPolyline> (fichier AddPolyline.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "AddPolyline.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type AddPolyline::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
AddPolyline & AddPolyline::operator = ( const AddPolyline & unAddPolyline )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
AddPolyline::AddPolyline ( const AddPolyline & unAddPolyline )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <AddPolyline>" << endl;
#endif
} //----- Fin de AddPolyline (constructeur de copie)


AddPolyline::AddPolyline ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <AddPolyline>" << endl;
#endif
} //----- Fin de AddPolyline


AddPolyline::~AddPolyline ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <AddPolyline>" << endl;
#endif
} //----- Fin de ~AddPolyline


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

