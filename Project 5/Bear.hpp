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
    Bear():Mammal(new std::string("Bear")){
    }
    
    std::string move(){
        return "lumber";
    }
    
    std::string talk(){
        return "growl";
    }
    
};

#endif /* Bear_hpp */
