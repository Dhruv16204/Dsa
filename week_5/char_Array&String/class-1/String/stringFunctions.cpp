#include<iostream>
using namespace std;

int main() {

    string name = "Virat Kohli";

    // .at is same as index for accesing element
    cout << name[4] << endl;
    cout << name.at(4) << endl;

    cout << name.front() << endl;
    cout << name.back() << endl;

    //get the length of string
    cout << name.length() << endl;

    //iterators
    auto it = name.begin();

    while(it != name.end()){
        cout << *it ;
        it++; 
    }
    cout << endl;

    //clear -> make the string empty
    name.clear();
    
    if(name.empty()){
        cout << "string is empty" << endl;
    }
    else {
        cout << "string is not empty" << endl;
    }

    //append or concat -> use + sign
    string fname = "Dhruv";
    string lname = "Solanki";

    string ans = fname + " " + lname ;
    cout << ans << endl;

    // substring -> substr
    string sentence = "Job dila do koi toh" ;

    cout << sentence.substr(0 , 6) << endl;    // substr(starting , ending)
    cout << sentence.substr(5) << endl;     // 5 index se end tak

    //find -> returns integer value ->find position 
    string word = "dila";

    int ans1 = sentence.find(word);
    cout << ans1 << endl;

    if(sentence.find(word) != string::npos){
        //string found
        cout << "found" << endl;
    }
    else {
        //not found
        cout << "not found" << endl;
    }

    //compare
    string s1 = "rohit";
    string s2 = "rohit";
    
    cout << s1.compare(s2) << endl; // 0 means true -> same hai

    return 0;
}