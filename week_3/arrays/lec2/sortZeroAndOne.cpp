#include<iostream>
using namespace std;

void sortZeroAndOne(int a[] , int n){
    int countZero = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i] == 0){
            countZero++;
        }
    }
    // // insertion
    for(int i=0;i<countZero;i++){
        a[i] = 0 ;
    }
    for(int i=countZero;i<n;i++){
        a[i] = 1;
    }

    // using inbuit function fill
    // fill(a,a+countZero,0);
    // fill(a+countZero,a+n,1);
}

int main() {
    // int arr[] = {0,1,1,1,0,0,1};
    // int size = 7;
    int arr[100];
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    for(int i=0;i<size;i++){
        cout << "Enter the element at index " << i <<": ";
        cin >> arr[i];
    }
    sortZeroAndOne(arr , size);

      for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }

    return 0;
}