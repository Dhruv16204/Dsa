#include<iostream>
#include<queue>
using namespace std;

int main(){

    //creation
    queue<int> q;
    //push
    q.push(10);
    //10
    q.push(20);
    //10,20
    q.push(30);
    //10,20,30
    q.push(40);
    //10,20,30,40

    cout << q.size() << endl;
    q.pop();
    //20,30,40
    cout << q.size() << endl;

    //empty
    if(q.empty() == true){
        cout << "queue is empty" << endl;
    }
    else{
        cout << "queue is not empty" << endl;
    }

    //front and back
    cout << "front: " << q.front() << endl;
    cout << "back: " << q.back() << endl;

    //swap
    queue<int> first;
    first.push(100);
    first.push(200);

    queue<int> second;
    second.push(600);
    second.push(700);

    first.swap(second);
    cout << "after swapping: " << first.front() << " " <<first.back() << endl;

    return 0;
}