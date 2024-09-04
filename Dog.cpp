#include "Dog.h"

using std::string;
using std::to_string;
using std::cout;
using std::endl;

bool Dog::operator<(Dog &other) {
    return age < other.age;
}

string Dog::move() {
    return "mobility is running";
}

ostream& operator<<(ostream &Cout, Dog &D) {
    Cout << "Dog name is " << D.getName() + " age " << to_string(D.getAge()) << endl;
    return Cout;
}