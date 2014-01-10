/*************************************************************************
                           Controller  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <Controller> (file Controller.h) ------
#if ! defined ( CONTROLLER_H_ )
#define CONTROLLER_H_

//-------------------------------------------------------- Interfaces used

//-------------------------------------------------------------- Constants 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Class role of <Controller>
//
//
//------------------------------------------------------------------------ 

class Controller
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods
    // type Method ( parameter list );
    // How to use:
    //
    // Contract :
    //

	static Controller & GetInstance ( );
	// How to use:
	// Returns the single instance of the controller.

//--------------------------------------------------- Operator overloading
	Controller & operator = ( const Controller & rController );
	// Not implemented: unauthorized.

//---------------------------------------------- Constructors - destructor
	Controller ( const Controller & rController );
	// Not implemented: unauthorized.

//---------------------------------------------- Constructors - destructor

    virtual ~Controller ( );
    // How to use:
    //
    // Contract:
    //

//---------------------------------------------------------------- PRIVATE 

protected:
//------------------------------------------------------ Protected methods

    Controller ( );
    // Because the controller is a singleton.

//--------------------------------------------------- Protected attributes
    static Controller instance;

};

//------------------------------ Other definitions depending on <Controller>

#endif // CONTROLLER_H_

