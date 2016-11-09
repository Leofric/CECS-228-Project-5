//
//  Bird.hpp
//  Project 5
//
//  Created by Alex Berthon on 10/28/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//

#ifndef Bird_hpp
#define Bird_hpp

#include <stdio.h>
#include <string>
#include "Animal.hpp"

//Bird subClass
class Bird: public Animal{
    
protected:
    //Constructor, calls base constructor
    //@param *type the type of the animal, type std::string
    Bird(std::string *type):Animal(type){
    }
};

#endif /* Bird_hpp */
