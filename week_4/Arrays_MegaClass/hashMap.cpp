#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

    //creating map
    unordered_map<int,int> mp;

    //insertion
    mp[1] = 51;
    mp[2] = 52;
    mp[3] = 53;
    mp[4] = 54;

    mp[3] = 56; // 3 key par value reassign hogi 

    //traverse 
    auto it = mp.begin();
    while(it !=mp.end()){
        int key = it -> first;
        int value = it -> second;
        cout << "Key: " << key <<" " << "Value: " << value << endl;
        it++;
    }

    //searching -> bohot fast hoti hai -> avg. T.C -> O(1) & worst T.C -> O(n)

    if(mp.find(3) != mp.end()) //here searching hum key se kar rahe hai
    {
        //found
        int value = mp[3];
        cout << "value: " << value << endl;
    }
    else {
        //not found 
        cout << "not found " << endl;
    }


    //deletion
    mp.erase(2);

    //printing after erase()
    auto it2 = mp.begin();
    while (it2 != mp.end()){
        pair<int , int > p = *it2 ;
        cout << p.first << " " << p.second << endl;
        it2++;
    }

    return 0;
}