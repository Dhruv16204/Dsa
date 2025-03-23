#include<iostream>
#include<vector>
using namespace std;

void merge (vector<int>&arr , int s , int e , int mid){
    //create left and right arrays
    //first find length of left and right array
    int leftLen = mid-s+1;
    int rightLen = e-mid;
    //we created in heap memory
    int *leftArr = new int[leftLen];
    int *rightArr = new int[rightLen];

    //orignal array's starting index
    int index = s;

    //copy values into left array
    for(int i=0;i<leftLen;i++){
        leftArr[i] = arr[index];
        index++;
    }
    //copy values into right array
    for(int j=0;j<rightLen;j++){
        rightArr[j] = arr[index];
        index++;
    }

    //merge logic
    int i=0;//left array me iterate
    int j=0;//right array me iterate
    index = s;//main array ka index

    //compare two values from left and right arrays and sort them into main array
    while(i<leftLen && j<rightLen) {
        if(leftArr[i] < rightArr[j]) {
            arr[index] = leftArr[i];
            i++;
            index++;
        }
        else {
            arr[index] = rightArr[j];
            j++;
            index++;
        }
    }

    //if there's still values present in either left or right array
    while(i<leftLen) {
        arr[index] = leftArr[i];
        i++;
        index++;
    }
    while(j<rightLen){
        arr[index] = rightArr[j];
        j++;
        index++;
    }

    //free heap memory -> good practice
    delete[] leftArr;
    delete[] rightArr;
}

void mergeSort(vector<int>&arr , int s , int e) {
    //base case
    if(s >=e) {
        return;
    }
    int mid = (s+e)/2;

    //left part
    mergeSort(arr , s , mid);
    //right part
    mergeSort(arr,mid+1 , e);

    //dono ko merge kardo
    merge(arr , s , e , mid);
}


int main() {
    vector<int>arr = {3,2,58,32,40,5};

    //before
    for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr,0 , arr.size()-1);

   //after 
   for(int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}