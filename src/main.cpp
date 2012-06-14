/*
** This file is part of cbits.
**
** cbits is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** cbits is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with cbits.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "version.h"
#include "convert.h"
#include "main.h"

#include <iostream>

using namespace std;

string full_version = string(cbits::pname) +" "+ string(cbits::pversion)
                      + string(cbits::pstage);

int main(int argc, char *argv[])
{
    cout << full_version << '\n';

    return 0;
}

