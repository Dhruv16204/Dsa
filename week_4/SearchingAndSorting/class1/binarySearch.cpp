//T.C of binary search -> T.C=O(logn)

#include<iostream>
using namespace std;

int binarySearch(int arr[] ,int size, int target){
    int start = 0;
    int end = size;


    while(start <= end){
        int mid = start + (end - start)/2;
        if(target == arr[mid]){
            return mid;
        }
        else if(target < arr[mid]){
            end=mid-1;
        }
        else if (target > arr[mid]){
            start=mid+1;
        }
    }
    //target not found 
    return -1;
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = 8;
    int target = 11;
    int ans = binarySearch(arr , size , target);
    if(ans == -1){
        cout << "target is not in the array" << endl;
    }
    else
        cout << "target found at index: " << ans << endl;

    return 0;
}