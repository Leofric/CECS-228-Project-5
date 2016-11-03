//
//  Eagle.hpp
//  Project 5
//
//  Created by Alex Berthon on 10/28/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//

#ifndef Eagle_hpp
#define Eagle_hpp

#include <stdio.h>
#include <string>
#include "Bird.hpp"

//Bird subclass
class Eagle: public Bird{
public:
    std::string move();
    std::string talk();
private:
    std::string animalType = "Eagle";
};

#endif /* Eagle_hpp */
