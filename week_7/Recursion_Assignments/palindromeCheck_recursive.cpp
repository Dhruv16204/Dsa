#include<iostream>
using namespace std;

bool checkPalindrome(string &s , int i , int j) {
    //base case
    if(i >= j) {
        return true;
    }

    //ek case hum solve
    if(s[i] != s[j]) {
        return false;
    }
    checkPalindrome(s , i+1 , j-1);
}

int main() {

    string s ;
    cin >> s;

    bool ans = checkPalindrome(s , 0 , s.size()-1);
    if(ans) {
        cout << "Is palindrome" << endl;
    }
    else
        cout << "NOt palindrome" << endl;

    return 0;
}