#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    //creating heap
    make_heap(v.begin() , v.end());
    for(int i : v){
        cout << i << " ";
    }cout << endl;

    //insertion
    v.push_back(60);
    //after push -> make sure to use 
    push_heap(v.begin() , v.end());
    for(int i : v){
        cout << i << " ";
    }cout << endl;

    //deletion
    //first use
    pop_heap(v.begin() , v.end());
    v.pop_back();
    for(int i : v){
        cout << i << " ";
    }cout << endl;

    //sort heap
    sort_heap(v.begin() , v.end());
    for(int i : v){
        cout << i << " ";
    }cout << endl;    


    return 0;
}