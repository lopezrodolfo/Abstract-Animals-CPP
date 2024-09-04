#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>
using std::string;
using std::ostream;

class Animal {
private:
    string name;
public:
    Animal(string name) {
        this->name = name;
    }
    string getName() { return name;}
    void setName(string name) {this->name = name;}

    //prototypes
    virtual string move()= 0;
    friend ostream& operator<<(ostream &Cout, Animal &a);
    bool operator<(Animal&);
};

#endif 