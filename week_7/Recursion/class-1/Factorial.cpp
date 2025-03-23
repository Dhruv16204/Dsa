// factorial using recursion

#include<iostream>
using namespace std;

int fact(int n) {
    //base case (mandatory)-> stopping criteria
    if(n==0 || n==1){
        return 1;
    }
    //recursive call -> mandatory
    int finalAns = n*fact(n-1);
    return finalAns;
}


int main() {

    int n ;
    cout << "Enter the Number: " ;
    cin >> n;

    int ans = fact(n);
    
    cout << "Factorial of " << n << " is: " << ans << endl;
    return 0;
}