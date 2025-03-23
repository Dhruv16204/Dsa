#include<iostream>
using namespace std;

void countZeroAndOne (int a[] , int s){
    int countZero = 0;
    int countOne = 0;
    for(int i=0;i<s;i++){
        if(a[i] == 0){
            countZero++;
        }
        if(a[i] == 1) {
            countOne++;
        }
    }
    cout <<"Total number of zeros: " << countZero << endl;
    cout <<"Total number of ones: " << countOne << endl;
}

int main(){
    int arr[100];
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    for(int i=0;i<size;i++){
        cout << "Enter the element at index " << i <<": " << endl;
        cin >> arr[i];
    }
    countZeroAndOne(arr , size);
    return 0;
}