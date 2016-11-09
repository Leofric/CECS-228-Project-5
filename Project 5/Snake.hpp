//
//  Snake.hpp
//  Project 5
//
//  Created by Alex Berthon on 10/28/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//

#ifndef Snake_hpp
#define Snake_hpp

#include <stdio.h>
#include <string>
#include "Reptile.hpp"
#include <iostream>

//Reptile subclass
class Snake: public Reptile{
public:
    //Constructor, calls reptile constructor
    //@param *type the type of the animal, type std::string
    Snake():Reptile(new std::string("Snake")){
    }
    
    std::string move(){
        return "slither";
    }
    std::string talk(){
        return "hiss";
    }
};

#endif /* Snake_hpp */
