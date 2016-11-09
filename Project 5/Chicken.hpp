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
#include <iostream>

//Bird subClass
class Chicken: public Bird{
public:
    Chicken(){
        animalType = "Chicken";
    }
    std::string move(){
        return "wander";
    }
    std::string talk(){
        return "squak";
    }
    
    std::string getAnimalType(){
        return animalType;
    }
    
    friend std::ostream& operator<<(std::ostream& os, Chicken& chicken){
        os << chicken.animalType << ", " <<chicken.Chicken::move() <<", "<< chicken.Chicken::talk();
        return os;
    }
    
protected:
    std::string animalType;
};

#endif /* Chicken_hpp */
