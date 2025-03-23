#include<iostream>
#include<deque>
using namespace std;

int main(){

    //creation
    deque<int> dq;
    dq.push_back(10);
    //10
    dq.push_back(20);
    //10,20
    dq.push_back(30);
        //10,20,30
    dq.push_back(40);
    //10,20,30,40
    dq.push_front(100);
    //100,10,20,30,40
    dq.push_front(200);
    //200,100,10,20,30,40

    cout << dq.size()<<endl;

    dq.pop_back();
    //200,100,10,20,30
    dq.pop_front();
    //100,10,20,30
    cout << dq.size() << endl;
    
    //front and back
    cout << dq.front() << endl;
    cout << dq.back() << endl;

    //empty
    if(dq.empty() == true){
        cout << "deque is empty " << endl;
    }
    else{
        cout << "deque is not empty" << endl;
    }

    //iterator
    deque<int>::iterator it = dq.begin();
    while(it != dq.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;

    cout << dq[2] << endl;
    cout << dq.at(1) << endl;

    // dq.erase(dq.begin() , dq.end());
    // cout << dq.size() << endl;
    // dq.clear();
    // cout << dq.size() << endl;
    // dq.insert(dq.begin() , 101);
    // cout << dq[0] << endl;

    //swap() is also available
    
    return 0;
}