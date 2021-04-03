#include <iostream>
using namespace std;

void printTribonacci(long long int n) {
    long long int trib[n];
    trib[0] = trib[1] = 0;
    trib[2] = 1;
    int flag = 0;
    int count = 0;

    for(long long int i = 3; i < n; i++){
        trib[i] = trib[i-1] + trib[i-2] + trib[i-3];
    }

    for(long long int i = 0; i < n; i++){
        if (flag == 0 && trib[i] < 0) {
            cout << " -ve starts at no: " << count ;
            flag = 1;
        }
        count++;
        cout << trib[i] << " ";
    }
}

int main() {
    long long int n = 70;
    printTribonacci(n);
    return 0;
}