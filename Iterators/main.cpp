#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

using namespace std;

// display any vector of integers using range-based for loop
void display(const vector <int> &vec) {
    cout << "[ ";
    for(auto const &i: vec) {
        cout << i << " ";
    }
    cout << "]" << endl;
    }

void test1() {
    cout << "================================" << endl;
    vector <int> nums1 {10,20,30,40,50};
    auto it = nums1.begin(); //Point to 10
    cout << *it << endl;

    it++; //Point to 20
    cout << *it << endl;

    it += 2; //Point to 40
    cout << *it << endl;

    it -=2; //Poin to 20
    cout << *it << endl;

    it = nums1.end() - 1; //Point to 50
    cout << *it << endl;

}

void test2() {
    cout << "================================" << endl;
    // display all the vector elements using an iterator
    vector <int> nums1 {10,20,30,40,50};

    vector <int>::iterator it = nums1.begin();
    while(it != nums1.end()) {
        cout << *it << endl;
        it++;
    }

    //change all vector elements to 0
    it = nums1.begin();
    while(it != nums1.end()){
        *it = 0;
        it++;
    }

    display(nums1);
}

void test3() {
    //using a const iterator
    cout << "================================" << endl;
    vector <int> nums1 {10,20,30,40,50};
    vector <int> ::const_iterator it1 = nums1.begin();
    //auto it1 = nums1.cbegin();

    while(it1 != nums1.end()) {
        cout << *it1 << endl;
        it1++;
    }

    //compiler error when we try to change element
    // it1 = nums1.begin();
    // while(it1 != nums1.end()) {
    //     *it1 = 0; // Compiler Error
    //     it1++;
    // }

}

void test4() {
    //more iterators
    // using a reverse iterator
    cout << "================================" << endl;
    vector <int> vec {10,20,30,40};
    auto it1 = vec.rbegin();
    while(it1 != vec.rend()) {
        cout << *it1 << endl;
        it1++;
    }


    //const reverse iterator over a list
    list <string> name {"ABC", "PQR", "XYZ"};
    auto it2 = name.crbegin();
    cout << *it2 << endl;
    it2++;
    cout << *it2 << endl;

    //iterator over a map
    map<string, string> favorites{
        {"qwe", "123"},
        {"asd", "456"},
        {"iop", "890"}
    };

    auto it3 = favorites.begin();
    while(it3 != favorites.end()) {
        cout << it3->first << " : " << it3->second << endl;
        it3++;
    }

}

void test5() {
    //iterate over subset of a container
    cout << "================================" << endl;
    vector <int> vec {10,20,30,40,50,60,70,80,90,100};
    auto start = vec.begin() + 2;
    auto finish = vec.end() - 3;

    while(start != finish) {
        cout << *start << endl;
        start++;
    }
}

int main() {
    test1();
    test2();
    test3();
    test4();
    test5();
}