// Time complexity of Insertion Sort -> O(n^2) -> bcz of nested loop

#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> &arr){
    int n = arr.size();
    for(int i=1;i<n;i++){
        int j = i-1;
        int key = arr[i];

        while(j >=0 && key < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){

    vector<int> arr = {9,2,7,5,1,6,3};

    insertionSort(arr);

    cout << "after sorting: " << endl;
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}