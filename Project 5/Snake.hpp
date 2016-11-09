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
#include <iostream>


//reptile subclass
class Snake: public Reptile{
public:
    Snake(){
        animalType = "Snake";
    }
    std::string move(){
        return "slither";
    }
    std::string talk(){
        return "hiss";
    }
    
    std::string getAnimalType(){
        return animalType;
    }
    
    friend std::ostream& operator<<(std::ostream& os, Snake& snake){
        os << snake.animalType << ", " <<snake.Snake::move() <<", "<< snake.Snake::talk();
        return os;
    }
    
protected:
    std::string animalType;
};

#endif /* Snake_hpp */
