#include<iostream>
#include<limits.h>
using namespace std;

bool checkSorted(int arr[] , int size , int i ) {
    if(i == size) {
        return true;
    }
    if(arr[i] > arr[i+1]){
        return false;
    }
    checkSorted(arr , size , i+1);

}



int main () {
    int arr[] = {10, 20,30,45,49, 50,55, 60};
    int size = sizeof(arr) / sizeof(int);
    int i = 0;

    bool ans = checkSorted(arr , size , i);
    cout << ans;

    return 0;
}
