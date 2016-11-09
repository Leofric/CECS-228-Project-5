//
//  Reptile.hpp
//  Project 5
//
//  Created by Alex Berthon on 10/28/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//

#ifndef Reptile_hpp
#define Reptile_hpp

#include <stdio.h>
#include <string>
#include "Animal.hpp"

//Reptile subClass
class Reptile: public Animal{
    
protected:
    //Constructor, calls base constructor
    //@param *type the type of the animal, type std::string
    Reptile(std::string *type):Animal(type){
    }
};
#endif /* Reptile_hpp */
