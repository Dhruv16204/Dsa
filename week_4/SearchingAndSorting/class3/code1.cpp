// Given two integers one is a dividend and the other is the
// divisor, we need to find the quotient when the dividend is divided
// by the divisor without the use of any " / " and " % " operators

//  Input: dividend = 10, divisor = 2
//  Output: 5
//  Explanation: 10/2 = 5.

//  Input: dividend = 10, divisor = 3
//  Output: 3
//  Explanation: 10/3 = 3.33333... which is truncated to 3.

//  Input: dividend = 10, divisor = -2
//  Output: -5
//  Explanation: 10/-2 = -5.

//hint : formula : dividend = (divisor * quotient) + remainder  

//T.C = O(logn) bcz of binary search , S.C=O(1)

#include<iostream>
using namespace std;

int getQuotient(int dividend , int divisor){
    int s = 0;
    int e = dividend;
    int mid = s + ((e-s)>>1); // " / " ye use karna mana hai -> right shift //also mid is considered as qutoient to find
    int ans = 0;

    while(s<=e){
        if((divisor*mid) == dividend){
            return mid;
        }
        if((divisor*mid) < dividend){
            //store and compute
            ans = mid;
            s = mid+1;
        }
        else {
            e = mid - 1;
        }
        mid = s + ((e-s)>>1);
    }
    return ans;
}

int main(){

    int dividend = -15;
    int divisor = 4;

    int ans = getQuotient(abs(dividend) , abs(divisor));

    if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)){
        ans = 0-ans;
    }
    cout << "output: " << ans << endl;

    return 0;
}