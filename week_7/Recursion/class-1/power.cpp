#include<iostream>
using namespace std;

int power(int n , int m){
    //base case
    if(m==0){
        return 1;
    }
    //processing
    //recursive call
    int finalAns = n * power(n , m-1);
    return finalAns;
}

int main() {

    int n;
    cout << "Enter the Number: ";
    cin >> n;

    int m ;
    cout << "Enter the power of no: ";
    cin >> m;

    int ans = power(n , m);
    cout << "ans is : " << ans << endl;
    return 0;
}