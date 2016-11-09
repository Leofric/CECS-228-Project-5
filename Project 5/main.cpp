//
//  main.cpp
//  Project 5
//
//  Created by Alex Berthon on 10/28/16.
//  Copyright © 2016 Alex Berthon. All rights reserved.
//


//PROBLEM 1 - data not deleted? static count doesnt decrease after i remove the animal
//PROBLEM 2 - cant figure out how to print a pointer such that cout<<*ptr prints name,walk,growl




#include <iostream>
#include "Animal.hpp"
#include "Lizard.hpp"
#include "Snake.hpp"
#include "Eagle.hpp"
#include "Chicken.hpp"
#include "Bear.hpp"
#include "Hyena.hpp"
#include "Lion.hpp"

#include <string>

void printMenu(Animal*[]);
void addAnimal(Animal*[]);
void removeAnimal(Animal*[]);
void displayAll(Animal*[]);
void animalCount();


int main(int argc, const char * argv[]) {
    int choice;
    bool run;
    Animal *cages[10] = {NULL};
    
    while(run){
    printMenu(cages);
    std::cin >> choice;
    switch (choice) {
        case 1:
            addAnimal(cages);
            break;
        case 2:
            removeAnimal(cages);
            break;
        case 3:
            displayAll(cages);
            break;
        case 4:
            animalCount();
            break;
        case 5:
            run = false;
            break;
        }
    }
    
    return 0;
}

void printMenu(Animal*cages[]){
    std::cout<<"----Zoo Cages----"<<std::endl;
    std::string animalType;
    for(int i = 0; i<10; i++){
        if(cages[i] == nullptr){
            animalType = "Empty";
        }
        else animalType = cages[i]->getAnimalType();
        
        std::cout<<i+1<<" ["<<animalType<<"]"<<std::endl;
    }
    
    std::cout<<"----Menu----"<<std::endl;
    std::cout<<"    1) Add"<<std::endl;
    std::cout<<"    2) Remove"<<std::endl;
    std::cout<<"    3) Display all animals"<<std::endl;
    std::cout<<"    4) Display animal count"<<std::endl;
    std::cout<<"    5) Exit"<<std::endl;
}

void addAnimal(Animal*cages[]){
    std::cout<<"Please enter the cage number ";
    int cageNumber;
    std::cin >> cageNumber;
    if(cages[cageNumber] == nullptr){
        std::cout<<"Please enter the animal to store"<<std::endl;
        std::cout<<"Press 1 for Lizard"<<std::endl;
        std::cout<<"Press 2 for Snake"<<std::endl;
        std::cout<<"Press 3 for Eagle"<<std::endl;
        std::cout<<"Press 4 for Chicken"<<std::endl;
        std::cout<<"Press 5 for Bear"<<std::endl;
        std::cout<<"Press 6 for Hyena"<<std::endl;
        std::cout<<"Press 7 for Lion\n"<<std::endl;

        int animal;
        std::cin>>animal;
        
        switch(animal){
            case 1:
                cages[cageNumber] = new Lizard;
                break;
            case 2:
                cages[cageNumber] = new Snake;
                break;
            case 3:
                cages[cageNumber] = new Eagle;
                break;
            case 4:
                cages[cageNumber] = new Chicken;
                break;
            case 5:
                cages[cageNumber] = new Bear;
                break;
            case 6:
                cages[cageNumber] = new Hyena;
                break;
            case 7:
                cages[cageNumber] = new Lion;
                break;
        }
        std::cout<<"Stored the animal in cage #"<<cageNumber<<"\n"<<std::endl;
    }
    else std::cout<<"That cage is already occuped\n"<<std::endl;
}

void removeAnimal(Animal*cages[]){
    std::cout<<"Please enter the cage number ";
    int cageNumber;
    std::cin >> cageNumber;
    if(cages[cageNumber] != nullptr){
        cages[cageNumber] = nullptr;
        std::cout<<"Animal removed from cage #"<<cageNumber<<"\n"<<std::endl;
    }
    else std::cout<<"That cage is already empty\n"<<std::endl;
}

void displayAll(Animal*cages[]){
    for(int i = 0; i<10; i++){
        std::cout<<cages[i]<<std::endl;
    }
    std::cout<<std::endl;
}

void animalCount(){
    std::cout<<"There are currently "<<Animal::getAnimalCount()<<" Animals in the zoo\n"<<std::endl;
}
















