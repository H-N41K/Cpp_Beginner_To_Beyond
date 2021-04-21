#include <iostream>
#include <array>
#include <algorithm>
#include <numeric> // for more algorithms like accumulate

using namespace std;


void display(const array <int,5> &arr){
    cout << "[ ";
    for(const auto &i:arr)
        cout << i << " ";
    cout << "]" << endl;
}

void test1() {
    cout << "\nTEST 1 ===============================================" << endl;
    array <int,5> arr1 {10,20,30,40,50};
    array <int,5> arr2;

    display(arr1);
    display(arr2);

    arr2 = {12,23,34,56,67};

    display(arr1);
    display(arr2);

    cout << "Size of arr1 is: " << arr1.size() << endl;
    cout << "Size of arr1 is: " << arr1.size() << endl;

    arr1[0] = 1000;
    arr1.at(1) = 2000;
    display(arr1);

    cout << "Front of arr2: " << arr2.front() << endl;
    cout << "Back of arr2: " << arr2.back() << endl;
}

void test2() {
    cout << "\nTEST 2 ===============================================" << endl;
    array <int,5> arr1 {10,20,30,40,50};
    array <int,5> arr2 {100,200,300,400,500};

    display(arr1);
    display(arr2);

    arr1.fill(5);

    display(arr1);
    display(arr2);

    arr1.swap(arr2);

    display(arr1);
    display(arr2);
}

void test3() {
    cout << "\nTEST 3 ===============================================" << endl;
    array <int,5> arr1 {10,20,30,40,50};

    int *ptr = arr1.data();
    cout << ptr << endl;
    *ptr = 99;
    display(arr1);
}

void test4() {
    cout << "\nTEST 4 ===============================================" << endl;
    array <int,5> arr1 {150,520,830,140,550};
    display(arr1);

    sort(arr1.begin(), arr1.end());
    display(arr1);
}

void test5() {
    cout << "\nTEST 5 ===============================================" << endl;
    array <int,5> arr1 {70,34,56,214,21};
    array <int,5>::iterator min_num = min_element(arr1.begin(), arr1.end());
    auto max_num = max_element(arr1.begin(), arr1.end());
    cout << "min: " << *min_num << ", max: " << *max_num << endl;
}

void test6() {
    cout << "\nTEST 6 ===============================================" << endl;
    array <int,5> arr1 {70,34,56,56,21};

    auto adjacent = adjacent_find(arr1.begin(), arr1.end());
    if(adjacent != arr1.end())
        cout << "Adjacent element found with value: " << *adjacent << endl;
    else 
        cout << "No adjacent elements found." << endl;
}

void test7() {
    cout << "\nTEST 7 ===============================================" << endl;

    array <int,5> arr1 {10,20,30,40,50};
    int sum = accumulate(arr1.begin(), arr1.end(), 0);
    cout << "Sum of elements in arr1 is: " << sum << endl;
}

void test8() {
    cout << "\nTEST 8 ===============================================" << endl;

    array<int,10> arr1 {1,2,3,2,3,2,3,2,3,8};
    int freq = count(arr1.begin(), arr1.end(), 3);
    cout << "Found " << freq << " occurrences of 3." << endl;
}

void test9() {
    cout << "\nTEST 9 ===============================================" << endl;

    array<int,10> arr1 {1,2,3,50,60,70,80,200,300,400};

    int freq = count_if(arr1.begin(), arr1.end(), 
                [](int x) {return x > 10 && x < 200;});

    cout << "Found " << freq << " matches." << endl;

}

int main() {
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();
    return 0;
}