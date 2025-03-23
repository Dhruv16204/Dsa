#include<iostream>
using namespace std;

void reverseArray(int a[] , int n){
    for(int i=n-1;i>=0;i--){
        cout << a[i] << " ";
    }
}

int main(){
    int arr[100];
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    for(int i=0;i<size;i++){
        cout << "Enter the element at index " << i <<": ";
        cin >> arr[i];
    }
    reverseArray(arr , size);
    return 0;
}