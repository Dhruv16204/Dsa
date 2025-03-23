//leetcode -> 136
#include<iostream>
using namespace std;

void uniqueNumber(int a[] , int n){
    int ans = 0;  //because xor any no with 0 returns that no ex: 0^7=7
    for(int i=0;i<n;i++){
        ans = ans^a[i];
    }
    cout << "Unique Number is: " << ans << endl;
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
    uniqueNumber(arr , size);

    return 0;
}

// note: if we take more than one unique no than the output would be xor of all that no's in binary. ex:two unique no 3,5 -> 3^5 = 6