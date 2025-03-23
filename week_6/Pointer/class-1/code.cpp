#include<iostream>
using namespace std;
int main() {
    // int a = 5;
    // int *b = &a;
    // cout << &a << endl;

    // int d = 6;
    // int *ptr = &d;
    // cout << sizeof(ptr) << endl;
    // cout << ptr << endl;
    // cout << sizeof(d) << endl;
    // cout << &ptr << endl;
    
    int a = 5;
    int* ptr = &a;
    cout << sizeof(ptr) << endl;

    char ch = 'd';
    char *ptr2 = &ch;
    cout << sizeof(ptr2) << endl;

    int *ptr3;
    cout << ptr << endl;


    int e = 8;
    int *p = &e;
    cout << *p << endl;

    //null pointer
    int *ptr5 = 0;
    cout << ptr5 << endl;

    cout << endl << endl;
    //
    int a1 = 8;
    int *p1 = &a1;
    //copying pointer 
    int *q1 = p1;
    cout << a1 << endl << p1 << endl << q1 << endl << endl;

    //POINTER WITH ARRAYS
    int arr[] = {10,20,30,40};
    int *ptrA = arr; 
    cout << ptrA << endl;
    cout << *(arr+3) << endl;

    cout << endl << endl;

    // WITH CHARACTER ARRAYS
    char ch1[100]  = "dhruvsolanki";
    char* cptr =  ch1;
    cout << ch1 << endl;
    cout << cptr << endl;
    //cptr = ch1 +1 ;
    cout << *cptr << endl;
    cout << *(cptr + 3) << endl;
    cout << cptr+3 << endl;

    cout << "base address: " << &ch1 << endl;

    cout << endl << endl;

    char ch3 =  'a';
    char *cptr1 = &ch3;
    cout << cptr1 << endl;  // jab tak null pointer na mile tab tak print karega // depends on compiler
    cout << endl << endl;

    //
    char ch4[100] = "RacecaR";
    char *cptr2 = &ch4[0];

    cout << "ch4: " <<  ch4 << endl;
    cout << "&ch4: " <<  &ch4 << endl;
    cout << "*(ch4 + 3): " <<  *(ch4 + 3) << endl;
    cout << "cptr2: " <<  cptr2 << endl;
    cout << "*cptr2: " <<  *cptr2 << endl;
    cout << "&cptr2: " <<  &cptr2 << endl;
    cout << "*(cptr2 + 3): " <<  *(cptr2 + 3) << endl;
    cout << "(cptr2 + 2): " << (cptr2 + 2)  << endl;
    cout << "(cptr2 + 4): " <<  (cptr2 + 4) << endl;
    cout << "&ch4[0]: " << &ch4[0] << endl;
    cout << "&ch4[0]: " << static_cast<void*>(&ch4[0]) << endl; // address print hoga

    cout << endl << endl;
    //
    char *cptr3 = "dhruv" ;
    cout << cptr3 << endl;



    return 0;
}