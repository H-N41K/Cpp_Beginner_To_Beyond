#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref1 (int &num) {
    num = 1000;
}

void pass_by_ref2 (string &s) {
    s = "Changed";
}

void pass_by_ref3 (vector <string> &v){
    v.clear();
}

void print_vector(const vector<string> &v) {
    for (auto s:v)
        cout << s << " ";
    cout << endl;
}

int main() {
    int num1{10}, num2 {20};
    cout << "num1 before calling pass_by_ref1() : " << num1 << endl;
    pass_by_ref1(num1);
    cout << "num1 after calling pass_by_ref1() : " << num1 << endl;

    string str1 {"qwerty"};
    cout << "str1 before calling pass_by_ref2() : " << str1 << endl;
    pass_by_ref2(str1);
    cout << "str1 after calling pass_by_ref2() : " << str1 << endl;

    vector<string> vec1 {"ABC", "DEF", "GHI"};
    cout << "vec1 before calling pass_by_ref3: ";
    print_vector(vec1);
    cout << endl;
    pass_by_ref3(vec1);
    cout << "vec1 after calling pass_by_ref3: ";
    print_vector(vec1);
    cout << endl;

}