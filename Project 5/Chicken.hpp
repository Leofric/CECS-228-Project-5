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

//Bird subClass
class Chicken: public Bird{
public:
    std::string move();
    std::string talk();
private:
    std::string animalType = "Chicken";
};

#endif /* Chicken_hpp */
