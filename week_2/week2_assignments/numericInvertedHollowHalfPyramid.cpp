#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if(i==0 || j==i+1 || j == n){
                cout << j << " ";
            } 
            else cout << "  ";
        }
        cout << endl;
    }
    return 0;
}

// ye mera vala logic hai
// for(int i=0;i<n;i++){
//         for(int j=0;j<n-i;j++){
//             if(i==0 || j==0 || i+j==n){
//                 cout << j+1 << " ";
//             } 
//             else cout << "  ";
//         }
//         cout << endl;
//     }