#include<iostream>
using namespace std;
int main(){
    int l;
    int w;
    cout << "Enter length" << endl;
    cin >> l;

    cout << "Enter width " << endl;
    cin >> w;
      for(int i=0; i<l; i++) {
            for(int j=0; j<w; j++) {
                 if(i==0 || j == 0 || j==w-1 || i==l-1){
                cout << "* ";
            }
            else cout << "  ";
            }
            cout << endl;
        }
    return 0;
}