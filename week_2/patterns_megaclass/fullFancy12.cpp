#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    //fancy 12 ka logic
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2 * i + 1; j++) {
      // cout << "$";

      if (j % 2 == 0)
        cout << i + 1;
      else
        cout << "*";
    }
    cout << endl;
  }
  
   n--;

  // inverted ka logic
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2 * (n - i) - 1; j++) {
      // cout << "$";
      if (j % 2 == 0)
        cout << n - i;
      else
        cout << "*";
    }
    cout << endl;
  }
    return 0;
}