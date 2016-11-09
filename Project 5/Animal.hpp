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
    ~Animal(){
        delete animalType;
        animalCount--;
    }
    virtual std::string talk() = 0;
    virtual std::string move() = 0;
    virtual std::string getAnimalType(){
        return *animalType;
    }
    static int getAnimalCount(){
        return animalCount;
    }
    

    
protected:
    static int animalCount;
    std::string *animalType = new std::string;
};


#endif /* Animal_hpp */
