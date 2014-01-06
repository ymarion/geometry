/*************************************************************************
                           Interpreter  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Réalisation de la classe <Interpreter> (fichier Interpreter.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Interpreter.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables
Interpreter Interpreter::instance = Interpreter( );
// Initialization of the singleton

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Interpreter::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

/* static */ Interpreter & Interpreter::GetInstance ( )
{
	return Interpreter::instance;
} //----- Fin de GetInstance

void Interpreter::Interpret ( istream & rStream )
{

} // End of Interpret

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

Interpreter::~Interpreter ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Interpreter>" << endl;
#endif
} //----- Fin de ~Interpreter


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

Interpreter::Interpreter ( )
: mrController( Controller::GetInstance( ) )
{
#ifdef MAP
    cout << "Appel au constructeur de <Interpreter>" << endl;
#endif
} //----- Fin de Interpreter
