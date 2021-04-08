#include <iostream>
#include <iomanip>

using namespace std;

void ruler() {
    cout << "\n123456789012345678901234567890123456789012345678901234567890" << endl;
}

int main() {
    int num1 {8423};
    double num2 {5309.4231};
    string hello {"Hello"};

    //Defaults
    cout << "\n--Defaults ---------------------------------" << endl;
    ruler();
    cout << num1 
         << num2 
         << hello 
         << endl;
    
    //Defaults
    cout << "\n--Defaults ---one per line-------------" << endl;
    ruler();
    cout << num1 << endl;
    cout << num2 << endl;
    cout << hello << endl;

    // Set field width to 10
    // Note the default justification is right for num1 only!
    cout << "\n--width 10 for num1 -----------------" << endl;
    ruler();
    cout << setw(10) << num1
         << num2
         << hello
         << endl;

    // Set field width to 10 for the first 2 outputs!
    // Note the default justification is right for both num1 and num2.
    cout << "\n--width 10 for num1 and num2 -----------------" << endl;
    ruler();
    cout << setw(10) << num1
         << setw(10) << num2
         << hello
         << endl;

    
    // Set field width to 10 for all 3 outputs!
    // Note the default justification is right for all.
    cout << "\n--width 10 for num1 and num2 and hello ------------" << endl;
    ruler();
    cout << setw(10) << num1
         << setw(10) << num2
         << setw(10) << hello
         << endl;

    
    // Set field width to 10 for all 3 outputs and justify all left
    // Note the default justification is right for all.
    cout << "\n--width 10 for num1 and num2 and hello left for all------------" << endl;
    ruler();
    cout << setw(10) << left << num1
         << setw(10) << left << num2
         << setw(10) << left << hello
         << endl;

    //setfill to dash
    //this is persistent
    //Then repeat the previous display
    cout << setfill('-');
    cout << "\n--width 10 for num1 and num2 and hello left for all setfill to dash-------" << endl;
    ruler();
    cout << setw(10) << left << num1
         << setw(10) << left << num2
         << setw(10) << left << hello
         << endl;


    // Set width to 10 for all, left justify and vary the setfill character
    cout << "\n--width 10 for num1 and num2 and hello left for all setfill varies-------" << endl;
    ruler();
    cout << setw(10) << left << setfill('*') << num1
         << setw(10) << left << setfill('~')<< num2
         << setw(10) << left << setfill('@')<< hello
         << endl;
    return 0;
}