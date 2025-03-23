#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){

    //creation of unordered map ->T.C->O(1)
    unordered_map<string , string> table;
    //for ordered map
    //map<string , string> table
    //all the below funcitons would be same for map but -> T.C->O(logn)
    //simply run also for ordered map 
    
    //insertion
    table["in"] = "India";

    table.insert(make_pair("br","brazil"));

    pair<string , string> p;
    p.first = "en";
    p.second = "england";
    table.insert(p);

    //table.erase(table.begin(),table.end());
    cout << table.size() << endl;
    // table.clear();
    if(table.empty() == true ){
        cout <<  "map is empty" << endl;
    }
    else {
        cout << "map is not emtpy" << endl;
    }

    cout << table.at("in") << endl;

    //modify
    table.at("in") = "india2";
    cout << table.at("in") << endl;

    table["in"] = "india3";
    cout << table.at("in") << endl;

    //traverse using iterator
    unordered_map<string,string>::iterator it = table.begin();
    while(it != table.end()){
        //here the *it points to the key,value pair -> access assined to pair
        pair<string,string> p = *it;
        cout << p.first << " "<<p.second << endl;
        it++;
    }

    //find() -> returns iterator of the given key -> if key not found then end()
    if(table.find("in") != table.end()){
        cout << "key found " << endl;
    }
    else {
        cout << "key not found" << endl;
    }

    //count() -> returns the number with specified key -> here key is unique -> ans would be 0(key not found) or 1(key found)
    if(table.count("im") == 0){
        cout << "key not found" << endl;
    }
    if(table.count("in") == 1){
        cout << "key found" << endl;
    }
    return 0;
}