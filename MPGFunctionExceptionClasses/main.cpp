#include <iostream>
#include <string>
using namespace std;

class DivideByZeroException{};
class NegativeValueException{};

double calculate_mpg(int miles, int gallons) {
    if(gallons == 0)
        throw DivideByZeroException();
    if(miles < 0 || gallons < 0)
        throw NegativeValueException();
        
    return static_cast<double>(miles)/gallons;
}

int main() {
    int miles {0};
    int gallons {0};
    double miles_per_gallon {0};

    cout << "Enter the miles: ";
    cin >> miles;
    cout << "Enter the gallons: ";
    cin >> gallons;

    try{
        miles_per_gallon = calculate_mpg(miles, gallons);
        cout << "Result: " << miles_per_gallon << endl;
    }
    catch (const DivideByZeroException &ex){
        cerr << "Sorry you cannot divide by zero" << endl;
    }

    catch (const NegativeValueException &ex){
        cerr << "Sorry one of your parameters is negative" << endl;
    }
        

    return 0;
}