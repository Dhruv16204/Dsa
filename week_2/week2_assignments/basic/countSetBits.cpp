#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count = 0;
    while(n>0){
        // int bit = n%2;
        // if(bit==1){
        //     count++;
        // }
        // n=n/2;

        //using bitwise-operator
        int bit = n&1; // lsb
        if(bit == 1){
            count++;
        }
        n >>= 1;
    }
    cout << count << endl;
    return 0;
}