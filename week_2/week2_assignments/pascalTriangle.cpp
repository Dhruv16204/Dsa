#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){  // start with 1 instead of zero bcz of the formula used
        int c=1;
        for(int j=1;j<=i;j++){  // same here
            cout << c << " ";
            c=c*(i-j)/j ;  // this is the formula to find out pascal triangle value
        }
        cout << endl;
    }
    return 0;
}