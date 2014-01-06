/*************************************************************************
                           AbstractCommand  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Réalisation de la classe <AbstractCommand> (fichier AbstractCommand.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "AbstractCommand.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type AbstractCommand::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
AbstractCommand::AbstractCommand ( const AbstractCommand & unAbstractCommand )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <AbstractCommand>" << endl;
#endif
} //----- Fin de AbstractCommand (constructeur de copie)


AbstractCommand::AbstractCommand ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <AbstractCommand>" << endl;
#endif
} //----- Fin de AbstractCommand


AbstractCommand::~AbstractCommand ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <AbstractCommand>" << endl;
#endif
} //----- Fin de ~AbstractCommand


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

