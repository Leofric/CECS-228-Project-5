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

class Animal{
public:
    //Base Class deconstructor
    //decrements the global variable animalCount
    virtual ~Animal(){
        delete animalType;
        animalCount--;
    }
    //Pure Virtual base function, returns the sound of the animal
    //@return the string containing the sound of the animal, type std::string
    virtual std::string talk() = 0;
    
    //Pure Virtual base function returns the movement of the animal
    //@return the string representation of the movement of the animal
    virtual std::string move() = 0;
    
    //Virtual base function returns the name of the animal species
    //@return the type of animal, type std::string
    virtual std::string getAnimalType(){
        return *animalType;
    }
    
    //function returns the current animal count
    //@return the animalCount type int
    static int getAnimalCount(){
        return animalCount;
    }
    
    //This function overloads the << opperator for output
    friend std::ostream& operator<<(std::ostream& os, Animal& animal);
    
protected:
    //Base class constructor
    //@param *type the type of the animal to assign to animalType
    Animal(std::string *type){
        animalType = type;
        animalCount++;
    }
    
    //Global variable to track how many animals are in existence
    static int animalCount;
    
    //dynamically allocated string for the type of the animal
    std::string *animalType;
};

#endif /* Animal_hpp */
