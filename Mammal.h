#ifndef MAMMAL_H
#define MAMMAL_H
#include "Animal.h"

class Mammal: public Animal {
private:
 
public:
    Mammal(string name): Animal(name) {
        
    }
    virtual string move() = 0;

};

#endif