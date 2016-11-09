//
//  Hyena.hpp
//  Project 5
//
//  Created by Alex Berthon on 10/28/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//

#ifndef Hyena_hpp
#define Hyena_hpp

#include <stdio.h>
#include <string>
#include "Mammal.hpp"
#include <iostream>

//mammal subclass
class Hyena: public Mammal{
public:
    //Constructor, calls mammal constructor
    //@param new std::string the type of animal
    Hyena():Mammal(new std::string("Hyena")){
    }
    
    std::string move(){
        return "slink";
    }
    std::string talk(){
        return "crackle";
    }
};

#endif /* Hyena_hpp */
