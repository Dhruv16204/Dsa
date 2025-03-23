#include<iostream>
using namespace std;
int main(){
    int r;
    float pi = 3.14;
    cout << "Enter the radius of circle: " ;
    cin >> r;

    float area = pi*r*r;
    cout << "Area of circle is: " << area << endl;
    return 0;
}