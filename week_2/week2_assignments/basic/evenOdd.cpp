// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     if(n%2==0){
//         cout << n << " is even" << endl;
//     }
//     else cout << n << " is odd" << endl;
//     return 0;
// }

//using bitwise operator
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n&1==1){
        cout << n << " is odd" << endl;
    }
    else cout << n <<" is even" << endl;
    return 0;
}