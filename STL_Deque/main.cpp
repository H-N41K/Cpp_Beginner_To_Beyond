#include <bits/stdc++.h>
using namespace std;

template <typename T>
void display(const deque<T> &d) {
    cout << "[";
    for (const auto &elem : d){
        cout << elem << " ";
    }
    cout << "]" << endl;
}

void test1(){
    cout << "\n=========TEST 1 ============" << endl;
    deque <int> d {10,20,30,40,50};
    display(d);

    d = {2,4,5,6};
    display(d);

    deque <int> d1 (10,34);
    display(d1);

    d[0] = 999;
    d.at(1) = 888;
    display(d);

}

void test2(){
    //push and pops
    cout << "\n=========TEST 2 ============" << endl;

    deque <int> d{0,0,0};
    display(d);

    d.push_back(10);
    d.push_back(20);
    display(d);

    d.push_front(123);
    d.push_front(456);
    display(d);

    cout << "Front: " << d.front() << endl;
    cout << "Back: " << d.back() << endl;
    cout << "Size: " << d.size() << endl;

    d.pop_back();
    d.pop_front();
    display(d);
}

void test3(){
    cout << "\n=========TEST 3 ============" << endl;
    vector <int> vec {10,20,30,40,50,60,70,80,90,100};
    deque <int> d;
    for(const auto &elem : vec){
        if(elem % 20 == 0)
            d.push_back(elem);
        else
            d.push_front(elem);
    }
    display(d);
}

void test4(){
    // push front vs back ordering
    cout << "\n=========TEST 4 ============" << endl;

    vector <int> vec {1,2,3,4,5,6,7,8,9,10};
    deque <int> d;

    for(const auto &elem: vec){
        d.push_front(elem);
    }
    display(d);

    d.clear();

    for(const auto &elem: vec){
        d.push_back(elem);
    }
    display(d);
}

void test5(){
    // same as test 4 using std::copy
    cout << "\n=========TEST 5 ============" << endl;

    vector <int> vec {1,2,3,4,5,6,7,8,9,10};
    deque <int> d;

    copy(vec.begin(), vec.end(), front_inserter(d));
    display(d);
    d.clear();

    copy(vec.begin(), vec.end(), back_inserter(d));
    display(d);
}

int main(){
    test1();
    test2();
    test3();
    test4();
    test5();
    return 0;
}