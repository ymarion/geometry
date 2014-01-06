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

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Interpreter::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
Interpreter & Interpreter::operator = ( const Interpreter & unInterpreter )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
Interpreter::Interpreter ( const Interpreter & unInterpreter )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Interpreter>" << endl;
#endif
} //----- Fin de Interpreter (constructeur de copie)


Interpreter::Interpreter ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Interpreter>" << endl;
#endif
} //----- Fin de Interpreter


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

