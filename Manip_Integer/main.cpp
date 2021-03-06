#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num {255};

    cout << "\n-----------------------------" << endl;
    cout << dec << num << endl;
    cout << hex << num << endl;
    cout << oct << num << endl;


    cout << "\n-----------------------------" << endl;
    cout << showbase;
    cout << dec << num << endl;
    cout << hex << num << endl;
    cout << oct << num << endl;

    cout << "\n-----------------------------" << endl;
    cout << showbase << uppercase;
    cout << dec << num << endl;
    cout << hex << num << endl;
    cout << oct << num << endl;

    cout << "\n-----------------------------" << endl;
    cout << showpos;
    cout << dec << num << endl;
    cout << hex << num << endl;
    cout << oct << num << endl;
}