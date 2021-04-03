#include <iostream>
#include "Mystring.h"

using namespace std;

int main() {
    Mystring empty; // No-args constructor
    Mystring larry ("Larry"); // Overloaded Constructor
    Mystring stooge {larry}; //Copy Constructor

    empty.display();
    larry.display();
    stooge.display();
    return 0;
}