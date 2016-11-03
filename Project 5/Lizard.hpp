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

//Reptile subclass
class Lizard: public Reptile{
public:
    std::string move();
    std::string talk();
private:
    std::string animalType = "Lizard";
};
#endif /* Lizard_hpp */
