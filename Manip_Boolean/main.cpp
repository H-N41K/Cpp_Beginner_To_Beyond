#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << "noboolalpha - default (10 == 10) : " << (10 == 10) << endl;
    cout << "noboolalpha - default (10 == 20) : " << (10 == 20) << endl;

    cout << boolalpha; // Change to true/false

    cout << "boolalpha - default (10 == 10) : " << (10 == 10) << endl;
    cout << "boolalpha - default (10 == 20) : " << (10 == 20) << endl;

    cout << noboolalpha; // Change to true/false

    //Setf method
    cout.setf(ios::boolalpha);
    cout << "noboolalpha - default (10 == 10) : " << (10 == 10) << endl;
    cout << "noboolalpha - default (10 == 20) : " << (10 == 20) << endl;

    cout << resetiosflags(ios::boolalpha);
    cout << "noboolalpha - default (10 == 10) : " << (10 == 10) << endl;
    cout << "noboolalpha - default (10 == 20) : " << (10 == 20) << endl;

}