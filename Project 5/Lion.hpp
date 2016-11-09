//
//  Lion.hpp
//  Project 5
//
//  Created by Alex Berthon on 10/28/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//

#ifndef Lion_hpp
#define Lion_hpp

#include <stdio.h>
#include <string>
#include "Mammal.hpp"
#include <iostream>

//Lion Subclass
class Lion: public Mammal{
public:
    //Constructor, calls mammal constructor
    //@param new std::string the type of animal
    Lion():Mammal(new std::string("Lion")){
    }
    std::string move(){
        return "stride";
    }
    std::string talk(){
        return "roar";
    }
};

#endif /* Lion_hpp */
