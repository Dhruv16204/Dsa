#include<iostream>
using namespace std;

int createNumUsingDigits(int n){
    int num =0;
    for(int i=0;i<n;i++){
        int digit;
        cout << "Enter Digit: ";
        cin >> digit;
        num = num*10 + digit;
        cout << "Number Created so far: " << num << endl;
    }
    return num;
}

int main(){
    int numOfDigits;
    cin >> numOfDigits;
    int num = createNumUsingDigits(numOfDigits);
    cout << "Number created by digits: " << num << endl;
    return 0;
}