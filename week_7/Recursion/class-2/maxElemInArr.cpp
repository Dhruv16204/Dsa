#include<iostream>
#include<limits.h>
using namespace std;

void maxElem(int arr[] , int size , int i , int &m) {
    if(i == size){
        return ;
    }
    m = max(m , arr[i]);
    maxElem(arr , size , i+1 , m);
}



int main () {
    int arr[] = {10, 20, 300, 400, 50, 60};
    int size = sizeof(arr) / sizeof(int);
    int i = 0;
    int m = INT_MIN;

    maxElem(arr , size , i , m);

    cout << m;

    return 0;
}

// for finding minimum same as above just change -> m = INT_MAX , min()