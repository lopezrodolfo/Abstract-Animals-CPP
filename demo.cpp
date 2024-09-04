/* 
demo.cpp

Tests Dog class created with Mammal and Animal abstract classes

Author: Rodolfo Lopez
*/
#include <vector> 
#include "Dog.h"
using std::cout;
using std::endl;
using std::vector;

int main(int argc, char*argv[]) 
{
    Dog murphy("Murphy", 75);
    cout << murphy << murphy.move() << endl;

    Dog puppies[]={Dog("Uno", 1), Dog("Daffy", 7), Dog("UNK", -1)};

    const int SIZE = sizeof(puppies) / sizeof(puppies[0]);

#if defined_WIN32 || defined __linux__
    std::sort(puppies, puppies+SIZE);
    for(Dog &p: puppies) {
        cout << p;
    }
#else

    auto less {
        [] (Dog l, Dog r) {
            return l.getAge() < r.getAge();
        }
    };

    std::sort(puppies, puppies+SIZE, less);
    for(auto p:puppies) {
        cout << p;
    }
#endif

    vector<Dog> vPuppies= {
        Dog("Romeo", 4),
        Dog("Alpha", 5),
        Dog("Tango", 2)
    };

    cout << "original vectors" << endl;
    for (Dog p: puppies) {
        cout << p;
    }

    vPuppies.pop_back();
    cout << "popping tango" << endl;
    for (Dog p: vPuppies) {
        cout << p;
    }
    vPuppies.push_back(Dog("Charlie", 5));
    cout << "pushing Charlie" << endl;

    for_each(vPuppies.begin(), vPuppies.end(),
        [](Dog &d){cout << d;}
    );

    return 0;
}
