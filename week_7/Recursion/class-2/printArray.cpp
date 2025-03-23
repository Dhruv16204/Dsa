#include <iostream>
#include <vector>
using namespace std;

void printArr(int arr[], int size, int index)
{
    // base case
    if (index == size)
    {
        return;
    }

    cout << arr[index] << " ";
    // recursive relation
    printArr(arr, size, index + 1);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(int);
    int index = 0;

    printArr(arr, size, index);

    return 0;
}