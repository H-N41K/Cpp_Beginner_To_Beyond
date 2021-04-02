#include <iostream>
using namespace std;

int main() {
    int *p;
    cout << "Value of p is : " << p << endl;
    cout << "Address of p is : " << &p << endl;
    cout << "Size of p is : " << sizeof(p) << endl;
    p = nullptr; // Set p to point nowhere.
    cout << "Value of p is : " << p << endl;
}