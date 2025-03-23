#include<iostream>
using namespace std;

void lastOccurence(int arr[] , int n, int target , int &ansIndex){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid] == target){
            //may or may not be last 
            ansIndex = mid;
            //last occurence -> right me jana padega
            s = mid+1;
        }
        if(target < arr[mid]){
            e = mid-1;
        }
        if(target > arr[mid]){
            s = mid+1;
        }
        //mid ko update karna mat bhulna
        mid = s + (e-s)/2;
    }
}

int main(){

    int arr[] = {20,20,30,30,30,30,30,40,50,80};
    int n = 10;
    int target = 30;
    //intitially -1 means target not found
    int ansIndex = -1;
    lastOccurence(arr,n,target,ansIndex);
    cout << "last occurence of target found at index: " << ansIndex << endl;

    return 0;
}