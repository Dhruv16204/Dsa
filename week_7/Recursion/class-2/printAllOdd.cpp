#include<iostream>
#include<limits.h>
using namespace std;

void printOdd(int arr[] , int size , int i) {
    if(i == size){
        return ;
    }

    if((arr[i] & 1 )) {          //for even -> == 0 se equat karado
        cout << arr[i] << " ";
    }

    printOdd(arr , size , i+1);

}



int main () {
    int arr[] = {10, 11, 12, 13 , 14, 15};
    int size = sizeof(arr) / sizeof(int);
    int i = 0;

    printOdd(arr , size , i);

    return 0;
}
