#include<iostream>
#include<queue>
using namespace std;

int main(){

    //creation
    priority_queue<int> pq;
    //max-heap -> maximum value -> highest priority

    pq.push(10);
    //10
    pq.push(25);
    //25,10
    pq.push(63);
    //63,25,10
    pq.push(19);
    //63,25,19,10

    //top element -> highest priority
    cout << pq.top() << endl;
    //63
    pq.pop();
    //pop -> highest priority vala element
    //25,19,10
    cout << pq.top() << endl;
    pq.pop();
    //19,10
    cout << pq.top() << endl;

    cout << "size: "<< pq.size() << endl;

    //empty
    if(pq.empty() == true){
        cout << "pqueue is empty" << endl;
    }
    else{
        cout << "pqueue is not empty" << endl; 
    }

    //min-heap -> minimum value -> highest priority
    priority_queue<int , vector<int> , greater<int>> pq1;

    pq1.push(100);
    //100
    pq1.push(50);
    //50,100
    pq1.push(75);
    //50,75,100
    cout << pq1.top() << endl;

    pq1.pop();
    //75,100
    cout << pq1.top() << endl;
    pq1.pop();
    //100
    return 0;
}