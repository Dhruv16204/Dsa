// Time complexity of Selection Sort -> O(n^2) -> bcz of nested loop

#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> &arr){
    int n = arr.size();
    int s = arr[0];
    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] > arr[minIndex])  //for desc order -> arr[j] > arr[minIndex]
            {
                minIndex = j;
            }
        }
        // swap ith and min element
        swap(arr[i] , arr[minIndex]);  
    }
}

int main(){

    vector<int> arr = {9,2,7,15,4,65,1};

    selectionSort(arr);

    cout << "after sorting: " << endl;
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}