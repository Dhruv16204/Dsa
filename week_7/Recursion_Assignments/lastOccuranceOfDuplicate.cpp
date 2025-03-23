//find the last occurence of the duplicate character in a given string

#include<iostream>
#include<cstring>
using namespace std;

void lastOccurLR(string &s , char ch , int &ans ,int i) {
    //base case
    if(i >= s.size())
        return;
    //ek case hum sambhalenge
    if(ch == s[i]) {
        ans = i;
    }
    lastOccurLR(s , ch , ans , i+1);
}

void lastOccurRL(string &s , char ch , int &ans ,int i) {
    //base case
    if(i < 0)
        return;
    //ek case hum sambhalenge
    if(ch == s[i]) {
        ans = i;
        return;
    }
    lastOccurRL(s , ch , ans , i-1);
}

int main() {
    string s;
    cout << "Enter the string:" << endl;
    cin >> s;

    char ch;
    cout << "Enter the char to find: " << endl;
    cin >> ch;

    int ans = 0;

    //first we apply the recursion by iterating from left -> right
    lastOccurLR(s , ch , ans , 0);

    cout << ans << endl;

    //from right -> left
    int ans2 = -1;
    lastOccurRL(s , ch , ans2 , s.size()-1);

    cout << ans2 << endl;


    //using inbuilt functiion -> strrchr(char string , char to find)
    // it returns an iterator to point at last ch index

    string s2 = "dhfdifd";
    char s3[] = "fheoddt";
    char *myPtr = strrchr(s3 , 'o');

    cout << myPtr-s3 << endl;

    return 0;
}