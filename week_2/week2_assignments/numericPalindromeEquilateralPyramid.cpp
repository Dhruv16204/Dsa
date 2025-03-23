#include <iostream>
using namespace std;
int main()
{ // ham loop ko do hisso me divide karnge pehle wala inverted ka logic then half ka
    int n;
    cin >> n;
    // inverted ka logic

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++) //ye vala loop space print karne ke liye
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++) //ye wala loop number ke liye
        {
            cout << j + 1;
        }
        for (int j = i - 1; j >= 0; j--) // ye wala loop half numeric pyramid ko print karne ke liye
        {
            cout << j + 1;
        }

        cout << endl;
    }
    return 0;
}