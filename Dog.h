#ifndef DOG_H
#define DOG_H
#include "Mammal.h"

class Dog: public Mammal {
private:
    int age;
public:
    Dog(string name, int age): Mammal(name) {
        this->age = age;
    }
    int getAge() {return age;}
    void setAge(int age) {this->age = age;}
    friend ostream& operator<<(ostream&, Dog&);
    // prototype
    string move();
    bool operator<(Dog&);
    

};  

#endif