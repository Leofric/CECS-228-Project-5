//
//  Animal.hpp
//  Project 5
//
//  Created by Alex Berthon on 10/28/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//

#ifndef Animal_hpp
#define Animal_hpp

#include <stdio.h>
#include <string>
//Abstract Class 

class Animal{
public:
    virtual std::string talk() = 0;
    virtual std::string move() = 0;
private:
     std::string animalType;
};


#endif /* Animal_hpp */
