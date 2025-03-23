#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(10);
    //10
    st.push(20);
    //10,20
    st.push(30);
    //10,20,30,
    st.push(40);
    //10,20,30,40

    //size
    cout << "size: " << st.size() << endl;

    //pop
    st.pop();
    //10,20,30
    cout << "size now: " << st.size() << endl;

    //top() ->return the topmost element of stack
    cout << st.top() << endl;

    //empty
    if(st.empty() == true ){
        cout << "stack is empty " << endl;
    }
    else{
        cout << "stack is not empty" << endl;
    }

    //swap
    stack<int> first;
    first.push(100);
    first.push(200);
    first.push(300);
    first.push(400);

    stack<int> second;
    second.push(500);
    second.push(600);
    second.push(700);
    second.push(800);

    first.swap(second);

}