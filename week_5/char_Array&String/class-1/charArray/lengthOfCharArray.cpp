#include<iostream>
using namespace std;

int getLength(char arr[] , int size){
    int index = 0;
    int c = 0;

    while(arr[index] != '\0'){
        //jab tak array me null char nahi milta
        // tab tak increment and aage badho
        c++;
        index++;
    }
    return c;
}

int main() {

    char arr[100];
    
    cout << "enter input: " ;
    cin >> arr;
    cout << "length is: " << getLength(arr , 100);

    return 0;
}