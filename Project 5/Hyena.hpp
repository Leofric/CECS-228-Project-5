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
#include <iostream>


//mammal subclass
class Hyena: public Mammal{
public:
    Hyena(){
        animalType = "Hyena";
    }
    std::string move(){
        return "slink";
    }
    std::string talk(){
        return "crackle";
    }
    
    std::string getAnimalType(){
        return animalType;
    }
    
    friend std::ostream& operator<<(std::ostream& os, Hyena& hyena){
        os << hyena.animalType << ", " <<hyena.Hyena::move() <<", "<< hyena.Hyena::talk();
        return os;
    }
    
protected:
    std::string animalType;
};

#endif /* Hyena_hpp */
