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

#ifndef IO_H
#define IO_H

#include <string>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include "../Tree.h"


    
    
/**
 * IO contains various tools for reading and writing files.
 */
class IO {
    
    /**
     * The directory the user is currently using to load and save files.
     */
    string fileDirectory;
    
    
public:
    
    static void saveFile(string fileName, string data);
    
    
    
    
    
    
};





#endif /* IO_H */

