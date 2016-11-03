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


//mammal subclass
class Hyena: public Mammal{
public:
    std::string move();
    std::string talk();
private:
    std::string animalType = "Hyena";
};

#endif /* Hyena_hpp */
