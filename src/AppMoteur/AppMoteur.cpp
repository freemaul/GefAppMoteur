/*
    This file is part of AppMoteur.

    AppMoteur is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AppMoteur is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <AppMoteur/AppMoteur.hpp>

const std::string AppMoteurVersion = "2010-12-b0";
const std::string AppMoteurDate = __DATE__;


AppMoteur::AppMoteur() : lance(false)
{

}

AppMoteur::~AppMoteur()
{

}

void AppMoteur::Lance()
{

}


bool AppMoteur::ChoixResolution(int rx,int ry,int d)
{
	if( ChangeResolution(rx,ry,d) )
	{
		resx = rx;
		resy = ry;
		depth = d;
		return true;
	}
	else
		return false;
}

void AppMoteur::DonneResolution(int& rx,int& ry,int& d) const
{
	rx = resx;
	ry = resy;
	d = depth;
}

bool AppMoteur::ChoixTitre(std::string n)
{
	if( ChangeTitre(n) )
	{
		titre = n;
		return true;
	}
	else
		return false;
}

void AppMoteur::DonneTitre(std::string& n) const
{
	n = titre;
}

