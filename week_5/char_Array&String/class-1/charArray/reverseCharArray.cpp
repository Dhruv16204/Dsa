#include<iostream>
#include<cstring>
using namespace std;

void reverseCharArray(char arr[] , int size){
    int n = strlen(arr);
    int i = 0;
    int j = n-1;

    while(i <= j){
        i++;
         swap(arr[i] , arr[j]);
       j--;
    }
}

int main() {

    char arr[100];
    
    cout << "enter input: " ;
    cin >> arr;

    reverseCharArray(arr , 100);

    cout << arr << endl;

    return 0;
}