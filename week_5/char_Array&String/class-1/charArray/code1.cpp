#include<iostream>
using namespace std;
int main(){

    //creation 
    char arr[100];

    cout << "Enter your name: ";
    //input
   // cin >> arr;

    //another way to input
    cin.getline(arr , 100);   // this will take space too as input (sentence: dhruv solanki here)

    //print
    cout << "Your name is: " << arr << endl;

    cout << arr[0] << "-> " << (int)arr[0] << endl;
    cout << arr[1] <<"-> " << (int)arr[1] << endl;
    cout << arr[2] <<"-> " << (int)arr[2] <<endl;
    cout << arr[3] << "-> " << (int)arr[3] <<endl;
    cout << arr[4] << "-> " << (int)arr[4] <<endl;  // here at last position null character is there
    cout << arr[200] << endl;


    char arr2[100];

    cout << "Enter your name:" << endl;

    //cin.getline(arr , 50 , '\t');
    // here \t is delimeter which is used to stop taking input when pressing that
    // we can make any delimeter
    cin.getline(arr, 50 , 'A');

    cout << arr << endl;

    return 0;
}