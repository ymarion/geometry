/*************************************************************************
                           ViewFigure  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Réalisation de la classe <ViewFigure> (fichier ViewFigure.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "ViewFigure.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type ViewFigure::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
ViewFigure::ViewFigure ( const ViewFigure & unViewFigure )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ViewFigure>" << endl;
#endif
} //----- Fin de ViewFigure (constructeur de copie)


ViewFigure::ViewFigure ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <ViewFigure>" << endl;
#endif
} //----- Fin de ViewFigure


ViewFigure::~ViewFigure ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <ViewFigure>" << endl;
#endif
} //----- Fin de ~ViewFigure


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

