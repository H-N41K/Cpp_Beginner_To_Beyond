#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <cctype>

using namespace std;

class Person {
    string name;
    int age;
public:
    Person() = default;
    Person(string name, int age)
        :name {name}, age{age} {}

    bool operator<(const Person &rhs) const {
        return this->age < rhs.age;
    }

    bool operator==(const Person &rhs) const {
        return (this->name == rhs.name && this->age == rhs.age);
    }
};

//Find an element in a container
void find_test() {
    cout << "\n=======================" << endl;
    
    vector <int> vec {10,20,30,40,50};

    auto loc = find(begin(vec), end(vec), 40);

    if(loc != end(vec))
        cout << "Found the number: " << *loc << endl;
    else    
        cout << "Couldn't find the number" << endl;

    list <Person> players {
        {"ABC", 18},
        {"XYZ", 21},
        {"PQR", 34}
    };

    auto loc1 = find(players.begin(), players.end(), Person{"XYZ", 21});
    if(loc1 != players.end())
        cout << "Found XYZ" << endl;
    else
        cout << "XYZ not found" << endl;

}

//count the number of elements in a container
void count_test() {
    cout << "\n=======================" << endl;

    vector <int> vec {10,34,56,44,6,7,43,36,766,34,44};
    int num = count(vec.begin(), vec.end(), 44);
    cout << num << " occurrences found" << endl;
}

//count the number of occurrences of an element in a container
//based on a predicate using a lambda expression
void count_if_test() {
    cout << "\n=======================" << endl;

    //count only if the element is even
    vector <int> vec {12,3,4,5,2,2,1,100};
    int num = count_if(vec.begin(), vec.end(), [](int x) { return x%2 == 0; });
    cout << num << " even numbers found" << endl;

    num = count_if(vec.begin(), vec.end(), [](int x) { return x%2 != 0; });
    cout << num << " odd numbers found" << endl;

    // how can we determine how many elements in vec are >= 5?
    num = count_if(vec.begin(), vec.end(), [](int x) { return x >= 5;});
    cout << num << " numbers are >= 5." << endl;
}


//Replace occurrences of elements in a container
void replace_test() {
    cout << "\n=======================" << endl;
    vector <int> vec {1,2,3,4,5,1,2,4,6,4,4,35,3};
    for(auto i: vec){
        cout << i << " ";
    }
    cout << endl;

    replace(vec.begin(), vec.end(), 1, 100);
    for(auto i: vec){
        cout << i << " ";
    }
    cout << endl;
}

void all_of_test() {
    cout << "\n=======================" << endl;
    vector <int> vec {1,3,5,7,9,1,3,13,19,5};
    if(all_of(vec.begin(), vec.end(), [](int x) { return x > 10; }))
        cout << "All the elements are > 10" << endl;
    else    
        cout << "Not all the elements are > 10" << endl;
}

//Transform elements in a container - string in this example
void string_transform_test(){
    cout << "\n=======================" << endl;
    string str1 {"This is a test"};
    cout << "Before transform: " << str1 << endl;
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    cout << "After transform: " << str1 << endl;    
}

int main() {
    find_test();
    count_test();
    count_if_test();
    replace_test();
    all_of_test();
    string_transform_test();
    return 0;
}