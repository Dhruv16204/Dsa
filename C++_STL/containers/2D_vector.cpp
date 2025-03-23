#include<iostream>
#include<vector>
using namespace std;

int main(){

    //2D Vector 
    //creation  
    vector<vector<int>> arr(5,vector<int>(5,0)); //2d vector with 5 rows and 5 columns each intitial value of 0
    int totalRows = arr.size();
    int totalColumns = arr[0].size();

    //jagged vector -> means in each row the size of column is different
    vector<vector<int>> j(4);
    j[0] = vector<int>(4); // -> 0th row -> 4column
    j[1] = vector<int>(5); // -> 1th row -> 5column
    j[2] = vector<int>(2); // -> 2th row -> 2column
    j[3] = vector<int>(3); // -> 3th row -> 3column

    return 0;
}
