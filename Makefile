#
#    This file is part of AppMoteur.
#
#    AppMoteur is free software: you can redistribute it and/or modify
#    it under the terms of the GNU Lesser General Public License as published by
#    the Free Software Foundation, either version 3 of the License, or
#    (at your option) any later version.
#
#    AppMoteur is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#    GNU Lesser General Public License for more details.
#
#    You should have received a copy of the GNU Lesser General Public License
#    along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
#

export INCLUDES=-I $(PWD)/include
export CC=g++

all:AppMoteur


AppMoteur:
	( cd src/AppMoteur && $(MAKE) )

clean:
	( cd src/AppMoteur && $(MAKE) clean)

install:AppMoteur


uninstall:


