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


bool Drawing::MoveFigure ( std::string const & rName, Point const & rVector )
{
	Figure *pFigure = mModel.FindFigure( rName );
	if ( 0 == pFigure )
	{
		return false;
	}

	pFigure->Move( rVector );
	return true;
} //----- End of MoveFigure


void Drawing::AddFigure ( Figure *pFigure )
{
	mModel.AddFigure( pFigure );
} //----- End of AddFigure


void Drawing::CopyAllFigures ( DrawingFigureList const & rListToCopy )
{
	mModel.AddFiguresFrom( rListToCopy );
} //----- End of CopyAllFigures


bool Drawing::FigureExists ( string const & rName )
{
	return 0 != mModel.FindFigure( rName );
} //----- End of FigureExits


Figure * const Drawing::GetFigure ( std::string const & rName )
{
	return mModel.FindFigure( rName );
} //----- End of GetFigure


void Drawing::PrintList ( ostream & rOutput, bool alphabetical ) const
{
	if ( mModel.IsEmpty( ) )
	{
		rOutput << "EMPTY" << endl;
	}
	else
	{
		mModel.PrintList( rOutput, alphabetical );
	}
} //----- End of PrintList


bool Drawing::IgnoreFigure ( string rName )
{
	return mModel.IgnoreFigure( rName );
} //----- End of IgnoreFigure


void Drawing::IgnoreFigures ( DrawingFigureList const & rAggregate )
{
	mModel.IgnoreFigures( rAggregate );
} //----- End of IgnoreFigures


bool Drawing::AcknowledgeFigure ( string const & rName )
{
	return mModel.AcknowledgeFigure( rName );
} //----- End of AcknowledgeFigure


bool Drawing::AcknowledgeFigures ( DrawingFigureList const & rAggregate )
{
	return mModel.AcknowledgeFigures( rAggregate );
} //----- End of AcknowledgeFigures


bool Drawing::DeleteFigure ( string const & rName )
{
	return mModel.DeleteFigure( rName );
} //----- End of DeleteFigure


void Drawing::DeleteFigures ( DrawingFigureList const & rAggregate )
{
	mModel.DeleteFigures( rAggregate );
} //----- End of DeleteFigures


DrawingFigureList const Drawing::GetList( ) const
{
	return mModel.GetCurrentState( );
}


void Drawing::Clear ( )
{
	mModel.Clear( );
} //----- End of Clear


//--------------------------------------------------- Operator overloading

//---------------------------------------------- Constructors - destructor
Drawing::~Drawing ( )
// Algorithm:
//
{
#ifdef DEBUG
	cout << "# Calling destructor of <Drawing>" << endl;
#endif
} //----- End of ~Drawing


//---------------------------------------------------------------- PRIVATE

//------------------------------------------------------ Protected methods
Drawing::Drawing ( )
: mModel( "Model" )
{
#ifdef DEBUG
	cout << "# Calling constructor of <Drawing>" << endl;
#endif
} //----- End of Drawing

