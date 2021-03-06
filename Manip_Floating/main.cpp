#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double num1 {123456789.987654321};
    double num2 {1234.5678};
    double num3 {1234.0};

    cout << "--Defaults-------------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    cout << setprecision(2);
    cout << "--Precision 2-------------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    cout << setprecision(5);
    cout << "--Precision 5---------------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    cout << setprecision(9);
    cout << "--Precision 9---------------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    cout << setprecision(3) << fixed;
    cout << "--Precision 3 and fixed ---------------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    cout << setprecision(3) << scientific;
    cout << "--Precision 3 fixed and scientific notation ---------------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    cout << setprecision(3) << scientific << uppercase;
    cout << "--Precision 3 - scientific - uppercase ---------------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    cout << setprecision(3) << fixed << showpos;
    cout << "--Precision 3 - fixed - showpos ---------------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    //Set back to defaults
    cout.unsetf(ios::scientific | ios::fixed);
    cout << resetiosflags(ios::showpos);

    cout << setprecision(10) << showpoint;
    cout << "--Precision 10 - showpoint ---------------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    //Set back to defaults
    cout.unsetf(ios::scientific | ios::fixed);
    cout << setprecision(6);
    cout << resetiosflags(ios::showpos);
    cout << resetiosflags(ios::showpoint);
    cout << "--Back to defaults ---------------" << endl;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

return 0;

}