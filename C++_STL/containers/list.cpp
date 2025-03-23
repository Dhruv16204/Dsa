#include<iostream>
#include<list>
using namespace std;

int main(){

    //creation
    list<int> l;
    l.push_back(10);
    //10
    l.push_back(20);
    //10->20
    l.push_back(30);
    //10->20->30
    l.push_back(40);
    //10->20->30->40
    l.pop_back();
    //10->20->30
    
    l.push_front(5); //age se dalega... element ko (control your thoughts bro)
    //5->10->20->30
    l.pop_front();   //age se nikalega.. element ko (phirse yaar)
    //10->20->30

    cout <<l.front() << endl;
    cout <<l.back() << endl;
    
    cout << l.size() << endl;
    //l.clear();

    if(l.empty() == true){
        cout << "list l is empty" << endl;
    }
    else{
        cout << "list l is not empty" << endl;
    }
    
    l.push_back(10); // 10->20->30->10
    //traverse list using iterator
    list<int>::iterator it = l.begin(); //l = 10->20->30->10
    while(it != l.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;

    //remove() -> remove every element in list == value
    l.remove(10);

    cout << "after removing: " << endl;
    list<int>::iterator it2 = l.begin();
    while(it2 != l.end()){
        cout << *it2 << " ";
        it2++;
    }
    cout << endl;

    //swap
    list<int> first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    //10->20->30

    list<int> second;
    second.push_back(40);
    second.push_back(50);
    second.push_back(60);
    //40->50->60
    
    cout << "first list: ";
    first.swap(second);
    for(int i : first){
        cout << i << " ";
    }
    cout << endl;
    cout << "second list: ";
    for(int i : second){
        cout << i << " ";
    }
    cout << endl;

    //insert 
    second.insert(second.begin(),100);
    //100->10->20->30
    cout << "after insert() second list: ";
    for(int i : second){
        cout << i << " ";
    }
    cout << endl;

    //erase
    cout << "size before: " << second.size() << endl;
    second.erase(second.begin() , second.end());
    cout << "size after: " << second.size() << endl;

    return 0;
}