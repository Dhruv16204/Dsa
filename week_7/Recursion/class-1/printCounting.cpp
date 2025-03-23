// printig the no.

#include <iostream>
using namespace std;

void count(int n)
{
  if (n == 0)
  {
    return;
  }
  //tail recursion -> o/p : 5 4 3 ...
  cout << n << " ";
  count(n - 1);

  //head recursion -> o/p : 1 2 3 ...
  //count(n - 1);
 // cout << n << " ";
  
}

int main()
{

  int n;
  cout << "Enter the Number: ";
  cin >> n;

  count(n);

  return 0;
}