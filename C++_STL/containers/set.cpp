#include<iostream>
#include<set>
using namespace std;

int main(){

    //creation
    set<int> st;

    //insert
    st.insert(30);
    st.insert(10);
    st.insert(20);
    st.insert(40);

    //traverse
    set<int>::iterator it = st.begin();
    while(it != st.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;

    //erase
    //st.erase(st.begin() , st.end());

    //size
    //st.clear();
    cout << st.size() << endl;

    if(st.empty() == true){
        cout << "set is empty " << endl;
    }
    else {
        cout << "set is not empty" << endl;
    }

    //find()
    if(st.find(20) != st.end()){
        cout << "found" << endl;
    }
    else cout << "not found" << endl;

    //count
    if(st.count(300) == 1){
        cout << "present " << endl;
    }
    if(st.count(300) == 0){
        cout << "not present" << endl;
    }


    return 0;
}