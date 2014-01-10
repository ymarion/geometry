/*************************************************************************
                           Aggregate  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Interface of the class <Aggregate> (file Aggregate.h) ------
#if ! defined ( AGGREGATE_H_ )
#define AGGREGATE_H_

//-------------------------------------------------------- Interfaces used
#include "Figure.h"

//-------------------------------------------------------------- Constants 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Class role of <Aggregate>
//
//
//------------------------------------------------------------------------ 

class Aggregate : public Figure
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods
    // type Method ( parameter list );
    // How to use:
    //
    // Contract:
    //


//--------------------------------------------------- Operator overloading
    Aggregate & operator = ( const Aggregate & anAggregate );
    // How to use:
    //
    // Contract:
    //


//---------------------------------------------- Constructors - destructor
    Aggregate ( const Aggregate & anAggregate );
    // How to use (copy constructor):
    //
    // Contract:
    //

    Aggregate ( );
    // How to use:
    //
    // Contract:
    //

    virtual ~Aggregate ( );
    // How to use:
    //
    // Contract:
    //

//---------------------------------------------------------------- PRIVATE 

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes

};

//------------------------------ Other definitions depending on <Aggregate>
//------------------------------ Other definitions depending on <Aggregate>

#endif // AGGREGATE_H_

