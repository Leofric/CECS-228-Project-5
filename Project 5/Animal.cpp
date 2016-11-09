//
//  Animal.cpp
//  Project 5
//
//  Created by Alex Berthon on 10/28/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//
#include <string>
#include <cstring>
#include <iostream>
#include "Animal.hpp"
int Animal::animalCount = 0;

std::ostream& operator<<(std::ostream& os, Animal& animal){
    os << animal.getAnimalType()<< ", " << animal.move() << ", " << animal.talk();
    return os;
}
