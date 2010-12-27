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

#ifndef GEFAPPMOTEUR_HPP
#define GEFAPPMOTEUR_HPP

#include <string>

extern const std::string GefAppMoteurVersion;
extern const std::string GefAppMoteurDate;

class GefAppMoteur
{
public:
	GefAppMoteur();
	virtual ~GefAppMoteur();

	virtual bool ChoixResolution(int,int,int);
	virtual void DonneResolution(int&,int&,int&) const;

	virtual bool ChoixTitre(std::string);
	virtual void DonneTitre(std::string&) const;

	virtual void Lance();

protected:
	virtual bool ChangeResolution(int,int,int)=0;
	virtual bool ChangeTitre(std::string)=0;


	int		resx,resy,depth;
	std::string	titre;
	bool		lance;
};


#endif

