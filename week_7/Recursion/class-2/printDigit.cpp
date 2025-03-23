#include<iostream>
using namespace std;

void printDigit(int n) {
    if(n == 0) {
        return ;
    }

    int newNo = n/10;
    printDigit(newNo);

    int digit = n %10;
    cout << digit << " " ;

}

int main() {
    int n ;
    cout << "Enter No. " ;
    cin >> n;

    printDigit(n);

    return 0;
}