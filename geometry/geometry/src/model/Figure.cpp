/*************************************************************************
                           Figure  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <Figure> (file Figure.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "Figure.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables
long Figure::currentId = 0;

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type Figure::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


long Figure::GetId ( ) const
{
	return mId;
}


string const & Figure::GetName( ) const
{
	return mName;
}


void Figure::SetName ( std::string const & rNewName )
{
	mName = rNewName;
	mNameLow = rNewName;
	toLower( mNameLow );
}


//--------------------------------------------------- Operator overloading
bool Figure::operator == ( Figure const & rFigureToCompare ) const
{
	return mNameLow == rFigureToCompare.mNameLow;
}


bool Figure::operator < ( Figure const & rFigureToCompare ) const
{
	return mNameLow < rFigureToCompare.mNameLow;
}


//---------------------------------------------- Constructors - destructor
Figure::Figure ( string name )
: mName( name ), mNameLow( name ), mId( currentId++ )
{
	toLower( mNameLow );
	// mNameLow now is lower case
#ifdef DEBUG
	cout << "# Calling constructor of <Figure>" << endl;
#endif
} //----- End of Figure


Figure::~Figure ( )
{
#ifdef DEBUG
	cout << "# Calling destructor of <Figure>" << endl;
#endif
} //----- End of ~Figure


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods
void Figure::toLower ( string & rStringToTransform ) const
{
	transform( rStringToTransform.begin( ), rStringToTransform.end( ),
			   rStringToTransform.begin( ), ::tolower );
}


//------------------------------ Other definitions depending on <Figure>
std::ostream & operator << ( std::ostream & rOutput,
							 Figure const & rFigure )
{
	rOutput << rFigure.ToString( );
	return rOutput;
}
