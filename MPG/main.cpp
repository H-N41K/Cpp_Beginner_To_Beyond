#include <iostream>
using namespace std;

int main() {
    int miles {0};
    int gallons {0};
    double miles_per_gallon {0};

    cout << "Enter the miles: ";
    cin >> miles;
    cout << "Enter the gallons: ";
    cin >> gallons;

    if(gallons != 0) {
        miles_per_gallon = static_cast<double>(miles) / gallons;
        cout << "Result: " << miles_per_gallon << endl;
    } else {
        cerr << "Sorry cant divide by 0" << endl;
    }
    
    

    return 0;
}