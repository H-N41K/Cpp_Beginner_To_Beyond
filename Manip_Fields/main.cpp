#include <iostream>
#include <iomanip>

using namespace std;

void ruler() {
    cout << "\n123456789012345678901234567890123456789012345678901234567890" << endl;
}

int main() {
    int num1 {1234};
    double num2 {1234.5678};
    string hello {"Hello"};

    //Default
    cout << "\n--Defaults ---------------------------------" << endl;
    ruler();
    cout << num1 
         << num2 
         << hello 
         << endl;
}