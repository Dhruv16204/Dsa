#include<iostream>
#include<vector>
using namespace std;

int main(){

    //creation 
    vector<int> marks;
    //vector with size
    vector<int> miles(10); // 10 size ka vector create hua hai
    //vector initialize with some value
    vector<int> distances(15,0); //15 block k vector me har jagah 0 hoga

//MEMBER FUNCTIONS

    vector<int> mark(10,-1);

    //begin()
    cout << *(mark.begin()) << endl; // *() karne se us location ki value milti hai

    //push_back() -> vector me element insert 
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);

    cout << "size of v : " << v.size() << endl;

    //pop_back() -> remove element from last
    v.pop_back(); //60 removed
    cout << "size of v : " << v.size() << endl;

    //front() ->  access first element of vector
    //back()  ->  access last element of vector
    cout << v.front() << endl;
    cout << v.back() << endl;

    //empty() -> check if vector is empty or not -> returns boolean value
    cout << v.empty() << endl;
    
    // just like array 
    v[2] = 40;
    cout << v[2] << endl;

    //at -> alternate for [] -> not much for use 
    cout << v.at(2) << endl; 

    //capacity() -> number of elements that vector can hold
    cout << "size: " << v.size() << endl; // idhar vector me kitne elements allocate hue hai
    cout << "capacity: " << v.capacity() << endl; // here vector kitne element allocate kar sakta hai

    //reserve() -> vector capacity to increase by n elements
    vector<int> markss;
    markss.reserve(10); //markss ko 10 ki capacity vala vector banayega
    cout << markss.capacity() << endl;

    //max_size() -> returns maximum number of elements that vector can hold (vary from system to system)
    cout << markss.max_size() << endl;

    //clear() -> removes all elements from vector -> size becomes 0
    // v.clear();
    // cout << "size of v: " << v.size() << endl;

    //erase(start , end)
    // v.erase(v.begin() , v.end()); -> same as clear()

    //insert(position , value) -> insert value at specified position
    v.insert(v.begin() , 5); //new v -> 5,10,20,40,50,60 
    cout << v[0] << endl; // here it does not overwrite at [0] 

    //swap() -> swap to vectors
    vector<int> first;
    vector<int> second;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    first.push_back(4);

    second.push_back(5);
    second.push_back(6);
    second.push_back(7);
    second.push_back(8);

    first.swap(second);
    //for-each loop
    for( int i : first){ // for each i(element) in vector( here first)
        cout << i << " ";
    }
    cout << endl;
    for(int i : second){
        cout << i << " ";
    }
    cout << endl;

    //traversing vector using iterator
    
    //creating a iterator
    vector<int>::iterator it = first.begin();

    while(it !=first.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;
    
    return 0;
}