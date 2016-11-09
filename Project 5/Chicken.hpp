//
//  Chicken.hpp
//  Project 5
//
//  Created by Alex Berthon on 10/28/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//

#ifndef Chicken_hpp
#define Chicken_hpp

#include <stdio.h>
#include <string>
#include "Bird.hpp"
#include <iostream>

//Bird subClass
class Chicken: public Bird{
public:
    Chicken():Bird(new std::string("Chicken")){
    }
    
    std::string move(){
        return "wander";
    }
    std::string talk(){
        return "squak";
    }
};

#endif /* Chicken_hpp */
