/*************************************************************************
                           Controller  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymarion1
*************************************************************************/

//---------- Interface de la classe <Controller> (fichier Controller.h) ------
#if ! defined ( CONTROLLER_H_ )
#define CONTROLLER_H_

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <Controller>
//
//
//------------------------------------------------------------------------ 

class Controller
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Method ( parameter list );
    // How to use:
    //
    // Contract :
    //

	static Controller & GetInstance ( );
	// How to use:
	// Returns the single instance of the controller.

//------------------------------------------------- Surcharge d'opérateurs
	Controller & operator = ( const Controller & rController );
	// Not implemented: unauthorized.

//-------------------------------------------- Constructeurs - destructeur
	Controller ( const Controller & rController );
	// Not implemented: unauthorized.

//-------------------------------------------- Constructeurs - destructeur

    virtual ~Controller ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

    Controller ( );
    // Because the controller is a singleton.

//----------------------------------------------------- Attributs protégés
    static Controller instance;

};

//--------------------------- Autres définitions dépendantes de <Controller>

#endif // CONTROLLER_H_

