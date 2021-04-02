#include <iostream>

using namespace std;

int main() {

    int *p {nullptr};
    p = new int;
    *p = 23;

    cout << *p << endl;

    delete p;

    cout << *p << endl;
return 0;
}