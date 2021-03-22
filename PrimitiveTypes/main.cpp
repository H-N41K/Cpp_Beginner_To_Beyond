#include <iostream>
using namespace std;

int main(){
    
    char middle_initial {'X'};
    cout << "Middle initial is " << middle_initial << endl;

    unsigned short int exam_score {755};
    cout << "My exam score was " << exam_score << endl;

    int countries_represented {55};
    cout << "There were " << countries_represented << " countries represented in my meeting." << endl;

    long people {99'99999'99}; // C++ 14 standard allows use of ' to make the number more readable.
    cout << "There are " << people << " people." << endl;

    long long distance_to_mars {9'555'5454'5454'545};
    cout << "Distance to mars: " << distance_to_mars << endl;

    float card_bill {559.3};
    cout << "Bill amount is : " << card_bill << endl;

    double pi = (double)22/7;
    cout << "Value of Pi : " << pi << endl;

    bool gameOver {false};
    cout << "The value of gameOver is : " << gameOver << endl;

    //Overflow example
    short val1 {30000};
    short val2 {1000};
    short mul {val1 * val2};
    cout << "The product of " << val1 << " and " << val2 << " is " << mul << endl;

}