#include<iostream>
#include<vector>
#include<forward_list>
#include<list>


using namespace std;

int main(){

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    //creating and traversing through iterator
    vector<int>::iterator it = v.begin();
    while(it!=v.end()){
        //*it -> returns the element at current position
        cout << *it << " ";
        //it++ -> move iterator 
        it++;
    }cout << endl;

    //forward iterator
    // forward_list<int> list;
    // list.push_front(10);
    // list.push_front(20);
    // list.push_front(30);

    // forward_list<int>::iterator it2 = list.begin();
    
    // while(it2 != list.end()){
    //     (*it2) = (*it2+5);
    //     it2++;
    // }
    
    // it2 = list.begin();
    // while(it2 != list.end()){
    //     cout << *it2 << " ";
    //     it2++;
    // }
    // cout << endl;

    //BI-Directional iterator
    //forward to ata hi hai. let's try backword   

    list<int> biList;
    biList.push_back(100);
    biList.push_back(200);
    biList.push_back(300);

    list<int>::iterator it3 = biList.end();

    while(it3!= biList.begin()){
        //we have to first decrement it3
        it3--;
        //write
        (*it3) = (*it3) + 10;
        //read 
        cout << (*it3) << " ";
    }
    cout << endl;

    vector<int> arr;
    arr.push_back(11);
    arr.push_back(22);
    arr.push_back(33);
    arr.push_back(44);
    arr.push_back(55);
    arr.push_back(66);

    //random access iterator
    vector<int>::iterator it4 = arr.begin() + 4;
    cout << *it4 <<endl;
    

    return 0;
}