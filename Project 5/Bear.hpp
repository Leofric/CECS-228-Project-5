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
#include <iostream>

//Mammal subclass
class Bear: public Mammal{
public:
    Bear(){
        animalType = "Bear";
    }
    
    std::string move(){
        return "lumber";
    }
    
    std::string talk(){
        return "growl";
    }
    
    std::string getAnimalType(){
        return animalType;
    }
    
    friend std::ostream& operator<<(std::ostream& os, Bear& bear){
        os << bear.animalType << ", " <<bear.Bear::move() <<", "<< bear.Bear::talk();
        return os;
    }
    
protected:
    std::string animalType;
};

#endif /* Bear_hpp */
