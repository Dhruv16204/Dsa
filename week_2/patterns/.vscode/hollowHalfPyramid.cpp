#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
      for(int i=0; i<n; i++) {
       
            for(int j=0; j<i+1; j++) {
                if(i==n-1 || j==0 || i==j){
                cout << "* ";
            }
            else cout << "  ";
            }
            cout << endl;
        }
    return 0;
}