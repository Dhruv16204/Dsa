#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    // outer loop
  for (int i = 0; i < n; i++) {
    // I spaces
    for (int j = 0; j < i; j++)
      cout << " ";

    // II stars
    for (int j = 0; j < n - i; j++)
      cout << "* ";

    cout << endl;
  }
    return 0;
}