//here the butterfly pattern is divided into two parts : upperhalf and lowerhalf
// this parts are also further divided into half-pyramid , spaces then again half-pyramid
#include<iostream>
using namespace std;

void upperHalf(int n){
     for(int i=0;i<n;i++){
        //1. for half-pyramid
        for(int j=0;j<=i;j++){
            cout << "* ";
        }

        //2. for spaces
        for(int j=0;j<2*(n-i-1);j++){
            cout << "  ";
        }

        //3. mirorred half-pyramid
        for(int j=0;j<i+1;j++){
            cout << "* ";
        }

        cout << endl;
    }
}

void lowerHalf(int n){
    for(int i=0;i<n;i++){

        //1. inverted half pyramid
        for(int j=0;j<n-i;j++){
            cout << "* ";
        }

        //2. for spaces
        for(int j=0;j<2*i;j++){
            cout << "  ";
        }

        //3. inverted pyramid
        for(int j=0;j<n-i;j++){
            cout << "* ";
        }

        cout << endl;
    }    
}

int main(){
    int n;
    cin >> n;
    upperHalf(n);
    lowerHalf(n);
    return 0;
}