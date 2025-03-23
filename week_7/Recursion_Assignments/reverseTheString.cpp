//reverse the string using recursion
#include<iostream>
using namespace std;

void reverseString(string &s , int i , int j) {
    //base case
    if(i >= j) {
        return;
    }
    //ek case solve
    swap(s[i] , s[j]);
    reverseString(s , i+1 , j-1);
}

int main() {
    string s;
    cout << "Enter the string:" << endl;
    cin >> s;

    reverseString(s , 0 , s.size()-1);

    cout << s << endl;

    return 0;
}