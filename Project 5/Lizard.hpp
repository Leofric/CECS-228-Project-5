//
//  Lizard.hpp
//  Project 5
//
//  Created by Alex Berthon on 10/28/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//

#ifndef Lizard_hpp
#define Lizard_hpp

#include <stdio.h>
#include <string>
#include "Reptile.hpp"
#include <iostream>

//Reptile subclass
class Lizard: public Reptile{
public:
    Lizard():Reptile(new std::string("Lizard")){
    }
        
    std::string move(){
        return "skitter";
    }
    std::string talk(){
        return "chirp"; //I actually had to look this up
    }
};
#endif /* Lizard_hpp */
