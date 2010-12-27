/*
    This file is part of GefAppMoteur.

    GefAppMoteur is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    GefAppMoteur is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <GefAppMoteur/GefAppMoteur.hpp>

const std::string GefAppMoteurVersion = "2010-12-b0";
const std::string GefAppMoteurDate = __DATE__;


GefAppMoteur::GefAppMoteur() : lance(false)
{

}

GefAppMoteur::~GefAppMoteur()
{

}

void GefAppMoteur::Lance()
{

}


bool GefAppMoteur::ChoixResolution(int rx,int ry,int d)
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

void GefAppMoteur::DonneResolution(int& rx,int& ry,int& d) const
{
	rx = resx;
	ry = resy;
	d = depth;
}

bool GefAppMoteur::ChoixTitre(std::string n)
{
	if( ChangeTitre(n) )
	{
		titre = n;
		return true;
	}
	else
		return false;
}

void GefAppMoteur::DonneTitre(std::string& n) const
{
	n = titre;
}

