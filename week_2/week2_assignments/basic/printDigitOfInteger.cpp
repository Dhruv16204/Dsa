#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The digits are: " ;
    while(n>0){
         int number = n%10;
         cout <<number << " ";
        n=n/10;
    }
    return 0;
}