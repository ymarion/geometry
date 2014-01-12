/*************************************************************************
 CreateMap  -  Allows easy creation and initialization of a template map.
 -------------------
 begin                : Nov 13 2009
 copyright            : (C) 2009 by Vite Falcon on stackoverflow.com
 http://stackoverflow.com/questions/138600/initializing-a-static-stdmapint-int-in-c
 *************************************************************************/

//---------- Interface of the class <CreateMap> (file CreateMap.h) ------
#if ! defined ( CREATEMAP_H_ )
#define CREATEMAP_H_

//-------------------------------------------------------- Interfaces used
#include <map>

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Class role of <CreateMap>
//
// Allows easy creation and initialization of a template map.
// Important: COPIES the values in the map (no passage by reference).
//------------------------------------------------------------------------

template <typename Key, typename Value>
class CreateMap
{
//----------------------------------------------------------------- PUBLIC

public:
//--------------------------------------------------------- Public methods
	// type Method ( parameter list );
	// How to use:
	//
	// Contract:
	//


	// Important: Value val is COPIED HERE (allowing method pointers)!!!!
	CreateMap( Key const & rKey, Value const val )
    {
        mMap[rKey] = val;
    } //----- End of CreateMap


	// Important: Value val is COPIED HERE (allowing method pointers)!!!!
	CreateMap<Key, Value> & operator()( Key const & rKey, Value const val )
    {
        mMap[rKey] = val;
        return *this;
    } //----- End of CreateMap<Key, Value>


    operator std::map<Key, Value>( )
    {
        return mMap;
    } //----- End of operator std::map<Key, Value>


//--------------------------------------------------- Operator overloading
	// CreateMap & operator = ( CreateMap const & aCreateMap );
	// Default

//---------------------------------------------- Constructors - destructor
	// CreateMap ( CreateMap const & aCreateMap );
	// Default

	// CreateMap ( );
	// Default

	// virtual ~CreateMap ( );
	// Default

//---------------------------------------------------------------- PRIVATE

protected:
//------------------------------------------------------ Protected methods

//--------------------------------------------------- Protected attributes
	std::map<Key, Value> mMap;
};

//------------------------------ Other definitions depending on <CreateMap>

#endif // CREATEMAP_H_

