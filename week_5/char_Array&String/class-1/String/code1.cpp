#include<iostream>
using namespace std;

int main() {

    // creation
    string name;

    cout << "Enter name: " ;
    //input
   //cin >> name;

    //output 
    cout << name << endl;
    cout << name[3] << endl;

    string str1;
    str1.push_back('d');
    str1.push_back('h');
    str1.push_back('r');
    str1.push_back('u');
    str1.push_back('v');
    str1.push_back(' ');
    str1.push_back('m');
    str1.push_back('e');

    str1.pop_back();

    cout << str1 << endl;

    string sentence;

    //taking input using getline
    getline(cin , sentence , '\n');

    cout << sentence << endl;
    return 0;
}