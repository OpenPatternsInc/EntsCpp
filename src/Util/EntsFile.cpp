/*
 * This file is part of the Ents Hierarchy Database Project.
 * Copyright (C) 2016 OpenPatterns Inc.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "EntsFile.h"
#include "IO.h"


const string EntsFile::FILE_POSTFIX = "ents";

EntsFile::EntsFile(Tree *tr) {
    tree = tr;
}

void EntsFile::save() {
    
    string data = tree->getName();
    
    IO::saveFile(fileName + "." + FILE_POSTFIX, data);
    
}