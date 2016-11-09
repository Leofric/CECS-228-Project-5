//
//  Mammal.hpp
//  Project 5
//
//  Created by Alex Berthon on 10/28/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//

#ifndef Mammal_hpp
#define Mammal_hpp

#include <stdio.h>
#include <string>
#include "Animal.hpp"

//Mammal subClass
class Mammal: public Animal{
    
protected:
    //Constructor, calls base constructor
    //@param *type the type of the animal, type std::string
    Mammal(std::string *fub):Animal(fub){
    }
};

#endif /* Mammal_hpp */
