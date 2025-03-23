#include<iostream>
using namespace std;

int fastExponention(int a , int b){  //T.C -> O(logb)
    int ans = 1;
    while(b > 0){

        if(b & 1){
            // b is odd -> ek vaar multiply kardo 
            ans = ans*a;
        }
        a *= a;
        b >>= 1; // b = b/2
    }
    return ans;
}

int main() {

    int ans = fastExponention(5 , 3);

    cout << ans;

    return 0;
}