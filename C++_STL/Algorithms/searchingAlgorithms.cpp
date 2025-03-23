#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    int target = 40;

    //binary_search() -> returns binary value -> T.C = O(logn)
    bool b = binary_search(v.begin(),v.end(),target);
    cout << b << endl;

    //lower_bound() -> finds the first element greater or equal to value -> returns an iterator
    auto it = lower_bound(v.begin() , v.end(), 35);
    cout << *it << endl;

    //lower_bound() -> finds the first element greater than value -> returns an iterator
    auto it2 = upper_bound(v.begin() , v.end(), 20);
    cout << *it2 << endl;

    vector<int> v2;
    v2.push_back(10);
    v2.push_back(20);
    v2.push_back(20);
    v2.push_back(20);
    v2.push_back(30);

    auto it3  = equal_range(v2.begin() , v2.end(), 20);

    cout << "20 is present from index " << (it3.first - v2.begin()) << " to " << (it3.second - v2.begin()); 



    return 0;
}