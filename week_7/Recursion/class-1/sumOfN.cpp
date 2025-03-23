#include <iostream>
using namespace std;

int getSum(int n)
{
    // base case
    if (n == 1)
    {
        return 1;
    }
    //recursive relation
    int ans = n + getSum(n - 1);
    return ans;
}

int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    int ans = getSum(n);

    cout << "sum of " << n << " no. is: " << ans << endl;

    return 0;
}