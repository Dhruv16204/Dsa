#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    // leveraging full pyramid code
  for (int i = 0; i < n; i++) {
    // 1. spaces
    for (int j = 0; j < n - i - 1; j++)
      cout << " ";

    // 2. stars
    for (int j = 0; j < i + 1; j++) {
      if (i == 0 || i == n - 1  || j == 0 || j == i )
        cout << "* ";
      else
        cout << "  ";
    }

    cout << endl;
  }
    return 0;
}