#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {

    vector<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    first.push_back(4);
    first.push_back(5);

    vector<int> second;
    second.push_back(3);
    second.push_back(4);
    second.push_back(5);
    second.push_back(6);
    second.push_back(7);

    vector<int> unionn;
    vector<int> intersection;
    vector<int> difference;
    vector<int> symmetricDiff;


    //set_union
    set_union(first.begin() , first.end() , second.begin(),second.end(),inserter(unionn,unionn.begin()));
    cout << "union is: ";
    for(int i : unionn){
        cout << i << " ";
    }cout << endl;

    //set_intersection
    set_intersection(first.begin() , first.end() , second.begin(),second.end(),inserter(intersection,intersection.begin()));
    cout << "intersection is: ";
    for(int i : intersection){
        cout << i << " ";
    }cout << endl;

    //set_difference
    set_difference(first.begin() , first.end() , second.begin(),second.end(),inserter(difference,difference.begin()));
    cout << "difference is: ";
    for(int i : difference){
        cout << i << " ";
    }cout << endl;

    //set_symmetric_difference
    set_symmetric_difference(first.begin() , first.end() , second.begin(),second.end(),inserter(symmetricDiff,symmetricDiff.begin()));
    cout << "symmetric difference is: ";
    for(int i : symmetricDiff){
        cout << i << " ";
    }cout << endl;



    return 0;
}