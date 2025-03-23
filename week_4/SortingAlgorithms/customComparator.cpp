#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void print(vector<int> &v){
    for(int i : v){
        cout << i << " ";
    }
    cout << endl;
}

bool  myComparator(int &a , int &b){
   // return a < b;  // ascending order
    return a > b;  // descending order
}

void printFor2d(vector<vector<int>> &v2){
    for(int i=0;i<v2.size();i++){
        vector<int>&temp = v2[i];
        int a = temp[0];
        int b = temp[1];

        cout << "(" << a << "," << b << ")"<< " ";
    }
    cout << endl;
}

bool myComp2(vector<int>&a , vector<int> &b ){

    return a[1] < b[1];
    return a[1] > b[1]; //desc order
}

int main(){

    vector<int> v = {23,64,12,8,45,52};
    
    sort(v.begin() , v.end() , myComparator);

   // print(v);


    vector<vector<int>> v2;
    int n;
    cout << "Enter the size of the vector: " ;
    cin >> n;

    for(int i=0;i<n;i++){
        int a,b;
        cout << "Enter a , b :" << endl;
        cin >> a >> b;

        vector<int>temp;
        temp.push_back(a);
        temp.push_back(b);
        v2.push_back(temp);
    }
    cout << "before sorting : " << endl;
    printFor2d(v2);

    //sort(v2.begin() , v2.end()); //inbuilt sorting fn does by 0th index(first element)
    sort(v2.begin() , v2.end() , myComp2);

    cout << "after sorting : " << endl;
    printFor2d(v2);
    return 0;
}