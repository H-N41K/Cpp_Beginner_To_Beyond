#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream in_file;
    in_file.open("lyrics.txt");

    if(!in_file) {
        cerr << "Problem opening file " << endl;
        return 1;
    }

    string line;
    while (getline(in_file, line))
    {
        cout << line << endl;
    }
    

    in_file.close();
    return 0;
}