#include <iostream>
#include <vector>

using namespace std;

int main() {
vector <char> vowels {'a', 'e', 'i', 'o', 'u'};

cout << vowels.at(3) << endl;
cout << vowels.at(4) << endl;
cout << "There are " << vowels.size() << " vowels in the vector." << endl;
// cout << vowels.at(10) ;

//Example of 2D vector
vector <vector <int>> movie_ratings {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12}
};

cout << movie_ratings.at(0).at(0) << endl;
cout << movie_ratings.at(1).at(2) << endl;
cout << movie_ratings.at(2).at(3) << endl;

}