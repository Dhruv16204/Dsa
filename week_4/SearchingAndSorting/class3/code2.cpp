//Given a sorted array arr[] of size N, some elements of array are
// moved to either of the adjacent positions, i.e., arr[i] may be
// present at arr[i+1] or arr[i-1] i.e. arr[i] can only be swapped
// with either arr[i+1] or arr[i-1]. The task is to search for an
// element in this array.

// Input: arr[] = {10, 3, 40, 20, 50, 80, 70}, key = 40
// Output: 2
// Explanation: Output is index of 40 in given array i.e. 2

// Input: arr[] = {10, 3, 40, 20, 50, 80, 70}, key = 90
// Output: -1
// Explanation: -1 is returned to indicate the element is not present

//note: you must find in O(logn) time.


#include<iostream>
#include<vector>
using namespace std;

int getAnsUsingBs(vector<int> &arr , int target){
    int n = arr.size();
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid-1] == target){
            return mid-1;
        }
        else if(arr[mid+1] == target){
            return mid+1;
        }

        if(target < arr[mid]){
            e = mid-2;
        }
        else {
            s = mid+2;
        }
        //ye mai har baar bhul jaata hu
        mid = s+(e-s)/2;
    }
    return -1;
}

int main(){
    vector<int> arr = {10, 3, 40, 20, 50, 80, 70 ,90};
    int target = 50;
    int ans = getAnsUsingBs(arr , target);
    cout << "output: " << ans << endl;
    return 0;
}
