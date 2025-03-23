#include<iostream>
using namespace std;

bool checkTwoSum(int a[] , int n, int t){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]+a[j] == t){
                //means that target found
                return true;
            }
        }
    }
    // target not found
    return false;
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
    bool ans = checkTwoSum(arr , size , target);
    if(ans==1){
        cout << "Pair found" << endl;
    }
    else cout << "Pair not found" << endl;
    return 0;
}