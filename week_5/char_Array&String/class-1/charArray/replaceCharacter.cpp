#include<iostream>
using namespace std;

void replaceChar(char oldChar ,char newChar , char arr[] , int size){

    for(int i=0 ;i<size ;i++){
        if(arr[i] == oldChar){
            arr[i] = newChar;
        }
    }
}

int main() {

    char arr[100];
    
    cout << "enter input: " ;
    cin >> arr;

    replaceChar('@' , ' ' , arr , 100);
    cout << arr << endl;

    return 0;
}