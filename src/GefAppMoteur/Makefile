#
#    This file is part of GefAppMoteur.
#
#    GefAppMoteur is free software: you can redistribute it and/or modify
#    it under the terms of the GNU Lesser General Public License as published by
#    the Free Software Foundation, either version 3 of the License, or
#    (at your option) any later version.
#
#    GefAppMoteur is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#    GNU Lesser General Public License for more details.
#
#    You should have received a copy of the GNU Lesser General Public License
#    along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
#

SRC= $(wildcard *.cpp)
OBJ= $(SRC:.cpp=.o)


all:libGefAppMoteur.a

libGefAppMoteur.a: $(OBJ)
	ar r $@ $(OBJ)
	mkdir -p ../../lib
	cp $@ ../../lib/

%.o:%.cpp
	$(CC) -c $^ -o $@ $(INCLUDES)

clean:
	rm -f $(OBJ) libGefAppMoteur.a

