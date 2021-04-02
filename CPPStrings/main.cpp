#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1}; //Apple
    string s6 {s1, 0, 3}; // App
    string s7 {};

    s7 = s1 + " " + s2;
    s1.erase(2,2);
    cout << s3.find("iw") << endl;

    cout << s0 << endl;
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    cout << s6 << endl;
    cout << s7 << endl;;
}