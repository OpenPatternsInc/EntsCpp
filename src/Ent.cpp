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

#include "Ent.h"
#include <string>

using namespace std;

Ent::Ent() {
    //Initialize vector lists.
    parents_ = new vector<Ent*>();
    children_ = new vector<Ent*>();
}

Ent::Ent(string name) : name_(name) {
    //Initialize vector lists.
    parents_ = new vector<Ent*>();
    children_ = new vector<Ent*>();
    //Useful in debugging.
    cout << "An Ent has been created with the name \"" << name << "\".\n";
}

Ent::~Ent() {
    //Deallocate the vectors. No need to deallocate what they point to.
    delete parents_;
    delete children_;
    //Useful for debugging.
    cout << "Ent \"" << getName() << "\" has been destroyed.\n";
}





