#include<iostream>
using namespace std;

bool searchElem(int arr[] , int size , int index , int target) {
    //base case
    if(index == size) {
        return false;
    }
    //processing part
    if(arr[index] == target) {
        return true;
    }
    else {
        searchElem(arr , size , index+1 , target);
    }

    //return false;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(int);
    int index = 0;
    int target = 50;

    bool ans = searchElem(arr, size, index , target);
    
    if(ans) {
        cout << "found" << endl;
    }
    else {
        cout << "Not found" << endl;
    }


    return 0;
}