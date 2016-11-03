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


//reptile subclass
class Snake: public Reptile{
public:
    std::string move();
    std::string talk();
private:
    std::string animalType = "Snake";
};

#endif /* Snake_hpp */
