// Time complexity of Bubble Sort -> O(n^2) -> bcz of nested loop

#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &arr){
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1])   //for desc order -> arr[j] < arr[j+1]
            {
                swap(arr[j],arr[j+1]);
            }
            else continue;
        }
    }
}

int main(){

    vector<int> arr = {9,2,7,15,4,65,1};

    bubbleSort(arr);

    cout << "after sorting: " << endl;
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}