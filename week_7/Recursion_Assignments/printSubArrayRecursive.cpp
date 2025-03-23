#include<iostream>
#include<vector>
using namespace std;

void printSubArray_util(vector<int> &num ,int start , int end ){
    //base case
    if(end == num.size()) {
        return;
    }
    //ek case recursion
    for(int i=start ; i<=end;i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    //Recursion
    printSubArray_util(num , start , end+1);
}

void printSubArray(vector<int> &num) {
    for(int start=0;start<num.size();start++) {
        int end = start;
        printSubArray_util(num , start , end);
    }
}

int main() {
    vector<int> num {1,2,3,4,5};

    printSubArray(num);
    return 0;
}