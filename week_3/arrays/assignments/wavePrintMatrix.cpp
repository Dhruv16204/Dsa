#include<iostream>
#include<vector>
using namespace std;

void wavePrintMatrix(vector<vector<int>> v){
    int m= v.size(); //row size
    int n = v[0].size(); //column size
    for(int i=0;i<n;i++){
        //even no of columns -> top to bottom
        if((i & 1) == 0){
            for(int j=0;j<m;j++){
                cout << v[j][i] << " ";
            }
            cout << endl;
        }
        //odd no of columns -> bottom to top
        else {
            for(int j= m-1 ;j>=0;j--){
                cout << v[j][i] << " ";
            }
            cout << endl;
        }
    }
}

int main(){
    vector<vector<int>> v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    wavePrintMatrix(v);
    return 0;

}