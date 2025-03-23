#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

    //for two values
    int a = 50;
    int b = 45;

    cout << min(a,b) << endl;
    cout << max(a,b) << endl;


    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    auto it = min_element(v.begin() , v.end());
    cout << *it << endl;

    auto it2 = max_element(v.begin() , v.end());
    cout << *it2 << endl;


    return 0;
}