#include <iostream>
using namespace std;

int main(){
    double length {0}, breadth {0}, area {0};
    cout << "Enter Length: ";
    cin >> length;

    cout << "Enter Breadth: ";
    cin >> breadth;

    area = length * breadth;
    cout << "Area is : " << area << " sq. units.";
}