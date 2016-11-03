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


//Lion Subclass
class Lion: public Mammal{
public:
    std::string move();
    std::string talk();
private:
    std::string animalType = "Lion";
};

#endif /* Lion_hpp */
