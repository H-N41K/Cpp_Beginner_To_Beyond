#include <iostream>
#include <vector>

using namespace std;

int main() {
    // int scores[] {10, 20, 30};
    // for (auto score: scores){
    //     cout << score << endl;
    // }

    // vector<double> temperatures {10, 20, 30, 50};
    // double total {};

    // for (auto t: temperatures){
    //     total += t;
    // }
    // cout << total << endl;

    for (auto c: "This is a test!") {
        if (c != ' '){
            cout << c << endl;
        }
    }

}