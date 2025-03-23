//print fibonacci sum upto n number
#include<iostream>
using namespace std;

int fib(int n)  {
    //base case
    if(n == 0 || n == 1){
        return n;
    }
    //recursive relation
    int ans = fib(n-1) + fib(n-2);
    return ans;
}

int main() {
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    int ans = fib(n);
    cout << "fibonacci series is: " << ans;
    return 0;
}