/*************************************************************************
                           Controller  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Réalisation de la classe <Controller> (fichier Controller.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Controller.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables
Controller Controller::instance = Controller( );
// Initialization of the singleton

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Controller::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method

/* static */ Controller & Controller::GetInstance ( )
{
	return Controller::instance;
} //----- Fin de GetInstance

//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur

Controller::~Controller ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Controller>" << endl;
#endif
} //----- Fin de ~Controller


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

Controller::Controller ( )
// Algorithm:
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Controller>" << endl;
#endif
} //----- Fin de Controller


