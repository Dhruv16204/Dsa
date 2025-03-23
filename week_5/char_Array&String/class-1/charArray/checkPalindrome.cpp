#include<iostream>
#include<cstring>
using namespace std;

bool checkPalindrome(char arr[] , int size){
    int n = strlen(arr);
    int i = 0;
    int j = n-1;

    while(i<=j){
        if(arr[i] == arr[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
        return true;
    }

}

int main() {
    char arr[100];
    
    cout << "enter input: " ;
    cin >> arr;

    if(checkPalindrome(arr , 100)){
        cout << "Is palindrome" << endl;
    }
    else {
        cout << "Not palindrome" << endl;
    }

    return 0;
}