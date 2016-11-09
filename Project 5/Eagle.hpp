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
#include <iostream>

//Bird subclass
class Eagle: public Bird{
public:
    Eagle(){
        animalType = "Eagle";
    }
    std::string move(){
        return "soar";
    }
    std::string talk(){
        return "screech";
    }
    
    std::string getAnimalType(){
        return animalType;
    }
    
    friend std::ostream& operator<<(std::ostream& os, Eagle& eagle){
        os << eagle.animalType << ", " <<eagle.Eagle::move() <<", "<< eagle.Eagle::talk();
        return os;
    }
    
protected:
    std::string animalType;
};

#endif /* Eagle_hpp */
