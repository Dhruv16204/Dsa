#include<iostream>
#include<vector>
using namespace std;

void mergeSorted(vector<int>&a , vector<int>&b , vector<int>&ans) {
    int i = 0;
    int j = 0;

    while(i < a.size() && j < b.size()) {
        if(a[i] < b[j]) {
            ans.push_back(a[i]);
            i++;
        }
        else {
            ans.push_back(b[j]);
            j++;
        }
    }

    while(j < b.size()) {
        ans.push_back(b[j]);
        j++;
    }
    while(i < a.size()) {
        ans.push_back(a[i]);
        i++;
    }


    // if(i == a.size() && j < b.size()) {
    //     for(int m=j;m<b.size();m++) {
    //         ans.push_back(b[m]);
    //     }
    // }
    // else {
    //     for(int m=i;m<b.size();m++) {
    //         ans.push_back(a[m]);
    //     }
    // }
}

int main() {
    //note: this are sorted arrays
    vector<int>a = {5,8,9,13,25};
    vector<int>b = {1,3,9,19};
    vector<int>ans;

    mergeSorted(a , b , ans);

    for(int i=0;i<ans.size();i++) {
        cout << ans[i] << " ";
    }
    return 0;
}