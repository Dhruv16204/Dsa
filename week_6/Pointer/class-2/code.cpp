#include<iostream>
using namespace std;

void solve(int* arr /*int arr[]*/ , int size){
    //yaha func me array as a pointer  format me pass hota hai isilye size 4 or 8 ayega
    cout << "size of array: " << sizeof(arr) << endl;
}

int main() {

    int arr[] = {10,20,30,40,50};
    int  size = 5;

    solve(arr , size);

    cout << endl << endl;
    //double pointer
    int a = 5;
    int* p = &a;
    int** q = &p;
    int*** r = &q;

    cout << "a: " << a << endl;
    cout << "&a: " << &a << endl;
    // cout << "*a: " << *a << endl; // error
    cout << "p: " << p << endl;
    cout << "&p: " << &p << endl;
    cout << "*p: " << *p << endl;
    cout << "q: " << q << endl;
    cout << "&q: " << &q << endl;
    cout << "*q: " << *q << endl;
    cout << "**q: " << **q << endl;
    cout << "r: " << r << endl;
    cout << "&r: " << &r << endl;
    cout << "*r: " << *r << endl;
    cout << "**r: " << **r << endl;
    cout << "***r: " << ***r << endl;

    return 0;
}