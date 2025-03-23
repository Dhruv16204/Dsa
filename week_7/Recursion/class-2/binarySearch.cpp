#include<iostream>
using namespace std;

int binarySearch(int arr[] , int size , int target) {
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;

    while(s <= e) {
        if(arr[mid] == target) {
            return mid;
        }
        else if(arr[mid] < target) {
            s = mid+1;
        }
        else {
               e = mid-1;
            }

        mid = s + (e-s)/2;

        return -1;
    }
}



int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(int);
    //int index = 0;
    int target = 300;

    int ans = binarySearch(arr , size , target);

    cout << ans;

    return 0;
}