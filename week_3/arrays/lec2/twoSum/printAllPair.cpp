//print all  pairs that sum equals to the target value
#include<iostream>
using namespace std;

void printSumPair(int a[] , int n , int t){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]+a[j] == t)
            {
                cout << a[i] << "," << a[j] << endl;
            }
        }
    }
    // target not found
    return;
}

int main(){
    int arr[100];
    int size;
    int target;
    cout << "Enter the number of elements: ";
    cin >> size;
    for(int i=0;i<size;i++){
        cout << "Enter the element at index " << i <<": ";
        cin >> arr[i];
    }
    cout <<"Enter Target value: ";
    cin >> target;

    printSumPair(arr , size , target);
    return 0;
}