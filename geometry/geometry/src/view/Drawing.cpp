/*************************************************************************
                           Drawing  -  description
                             -------------------
    begin                : Jan 6 2014
    copyright            : (C) 2014 by Yannick Marion & Gustave A. Monod
*************************************************************************/

//---------- Realization of the class <Drawing> (file Drawing.cpp) -------

//---------------------------------------------------------------- INCLUDE

//--------------------------------------------------------- System include
#include <algorithm>
#include <iostream>
using namespace std;

//------------------------------------------------------- Personal include
#include "Drawing.h"

//-------------------------------------------------------- Class constants

//-------------------------------------------------------- Class variables
Drawing Drawing::instance = Drawing( );

//----------------------------------------------------------------- PUBLIC

//--------------------------------------------------------- Public methods
// type Drawing::Method ( parameter list )
// Algorithm:
//
//{
//} //----- End of Method


/* static */ Drawing & Drawing::GetInstance ( )
{
	return Drawing::instance;
} //----- End of GetInstance


void Drawing::AddFigure ( string const & rName, Figure *pFigure )
{
	mFiguresAlpha.insert( make_pair( rName, pFigure ) );
	mFiguresCreation.push_back( pFigure );
} //----- End of AddFigure


void Drawing::AddFigureLists ( DrawingFigureList const & rListsToCopy )
{
	// TODO merge mFiguresAlpha    += rListsToCopy.first
	// TODO merge mFiguresCreation += rListsToCopy.second
} //----- End of AddFigureLists


Figure * const Drawing::FindFigure ( string const & rName ) const
{
	FiguresAlpha::const_iterator it ( mFiguresAlpha.find( rName ) );
	return mFiguresAlpha.end( ) == it ? 0 : it->second;
} //----- End of FindFigure


DrawingFigureList const Drawing::GetFigureLists ( ) const
{
	return make_pair( &mFiguresAlpha, &mFiguresCreation );
} //----- End of GetFigureLists


bool Drawing::MoveFigure ( std::string const & rName, Point const & rVector )
{
	Figure *pFigure = FindFigure( rName );
	if ( 0 == pFigure )
	{
		return false;
	}

	pFigure->Move( rVector );
	return true;
} //----- End of MoveFigure


bool Drawing::DeleteFigure ( std::string const & rName )
{
	Figure *pFigure = FindFigure( rName );
	if ( 0 == pFigure )
	{
		return false;
	}

	RemoveFigure ( rName );
	delete pFigure;

	return true;
} //----- End of DeleteFigure


bool Drawing::RemoveFigure ( std::string const & rName )
{
	Figure *pFigure = FindFigure( rName );
	if ( 0 == pFigure )
	{
		return false;
	}

	mFiguresAlpha.erase( rName );
	FiguresCreation::iterator it ( find( mFiguresCreation.begin( ),
										 mFiguresCreation.end( ), pFigure ) );
	mFiguresCreation.erase( it );
	return true;
} //----- End of RemoveFigure


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
Drawing::~Drawing ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling destructor of <Drawing>" << endl;
#endif
} //----- End of ~Drawing


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods
Drawing::Drawing ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "Calling constructor of <Drawing>" << endl;
#endif
} //----- End of Drawing

