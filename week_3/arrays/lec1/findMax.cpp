#include<iostream>
#include<limits.h>
using namespace std;

int findMax(int a[] , int s ){
    int maxAns = INT_MIN;
    for(int i=0;i<s;i++){
        //we can also do this with inbuild max function
        maxAns = max(maxAns , a[i]);
        // if(a[i] > maxAns){
        //     maxAns = a[i];
        // }
    }
    return maxAns;
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
    int ans = findMax(arr , size);
    cout << "Max number is: " << ans << endl;
    return 0;
}