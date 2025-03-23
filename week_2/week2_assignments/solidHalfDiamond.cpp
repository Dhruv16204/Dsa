#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    //pehle half pyramid print kiya
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout << "* ";
        }
        cout << endl;
    }

    // ye wala inverted half pyramid print ke liye
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            cout << "* ";
        }
        cout << endl;
    }


    return 0;
}
