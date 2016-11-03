//
//  Bear.hpp
//  Project 5
//
//  Created by Alex Berthon on 10/28/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//

#ifndef Bear_hpp
#define Bear_hpp

#include <stdio.h>
#include <string>
#include "Mammal.hpp"

//Mammal subclass
class Bear: public Mammal{
public:
    std::string move();
    std::string talk();
private:
    std::string animalType = "Bear";
};

#endif /* Bear_hpp */
