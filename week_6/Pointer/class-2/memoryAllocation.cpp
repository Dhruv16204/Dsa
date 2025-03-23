#include<iostream>
using namespace std;

int main() {

    //Integer -> STACK MEMORY 
    int a = 5;
    cout << a << endl;

    //Integer -> HEAP MEMORY
    int*p = new int;
    *p = 8;
    cout << *p << endl;

    //Dellocation
    delete p;

    //ARRAY ->STACK MEMORY
    int arr[5] = {0};
    cout << arr[0] << arr[1] << arr[2] << endl;

    //ARRRAY -> HEAP  MEMEORY
    int* brr = new int[5];

    cout << brr[0] << brr[1] << brr[2] << endl; // yaha garbage value print ho rahi hogi

    cout << endl << endl;

    //2D-ARRAY

    //in Stack Memory
    int crr[2][4] = {
                        {1,2,3,4},
                        {5,6,7,8}
    };

    //IN HEAP MEMORY
    int** drr = new int*[5];
    // Row count -> 5 & har row me int* hai

    for(int i=0;i<5;i++){
        //har pointer ke liye 1D array create karna hai
        drr[0] = new int[3]; // 3 count ka array assign kiya hai
    }
    //coloumn count - > 3


    return 0;
}