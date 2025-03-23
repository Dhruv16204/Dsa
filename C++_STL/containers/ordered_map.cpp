// all are same as map.cpp

#include<iostream>
#include<map>
using namespace std;

int main(){

    //creation of map ->T.C->O(logn)
    map<int , string> table;
    table.insert(make_pair(3,"dhruv"));
    table.insert(make_pair(1,"virat"));
    table.insert(make_pair(2,"warner"));
    // map sorts the elements -> key value

    //table.erase(table.begin(),table.end());
    cout << table.size() << endl;
    // table.clear();
    if(table.empty() == true ){
        cout <<  "map is empty" << endl;
    }
    else {
        cout << "map is not emtpy" << endl;
    }

    // cout << table.at("in") << endl;

    // //modify
    // table.at("in") = "india2";
    // cout << table.at("in") << endl;

    // table["in"] = "india3";
    // cout << table.at("in") << endl;

    //traverse using iterator
    map<int,string>::iterator it = table.begin();
    while(it != table.end()){
        //here the *it points to the key,value pair -> access assined to pair
        pair<int,string> p = *it;
        cout << p.first << " "<<p.second << endl;
        it++;
    }

    // //find() -> returns iterator of the given key -> if key not found then end()
    // if(table.find("in") != table.end()){
    //     cout << "key found " << endl;
    // }
    // else {
    //     cout << "key found" << endl;
    // }

    // //count() -> returns the number with specified key -> here key is unique -> ans would be 0(key not found) or 1(key found)
    // if(table.count("im") == 0){
    //     cout << "key not found" << endl;
    // }
    // if(table.count("in") == 1){
    //     cout << "key found" << endl;
    // }
    return 0;
}