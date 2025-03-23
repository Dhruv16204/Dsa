#include<iostream>
#include<vector>
using namespace std;

void printSubseq(string str , int i , string output , vector<string> &ans) {
    if(i == str.length()){
        // cout << output << endl;
        ans.push_back(output);
        return ;
    }
    char ch = str[i];
    //two case
    //1.include -> ch ko output me add karo
    printSubseq(str , i+1, output+ch , ans);
    //2.exclude -> ch ko ignore kia and aage badho
    printSubseq(str , i+1 , output ,ans);
}

int main() {
    string s = "abc";
    int i = 0;
    string output = "";
    vector<string> ans ;

    printSubseq(s , i , output , ans);

    for(auto i: ans ) {
        cout << i << endl;
    }
    cout << ans.size() << endl;
    
    return 0;
}