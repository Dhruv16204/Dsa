#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
   
    vector<int> arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    //accumulate(start , end , initialvalue) -> sum all the elements
    int totalSum = accumulate(arr.begin() , arr.end() , 0);
    cout << "total sum is: " << totalSum << endl;

    vector<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);

    vector<int> second;
    second.push_back(3);
    second.push_back(4);
    second.push_back(5);

    //inner_product() -> do vector ke elements ka product -> sum of the new elements
    // 1*3 , 2*4, 3*5 -> 3,8,15-> 3+8+15 = 26
    int ip =  inner_product(first.begin(),first.end(),second.begin() , 0);
    cout << "inner product: " << ip << endl;

    //partial_sum() -> computes the partial sum of range
    vector<int> result(first.size());
    partial_sum(first.begin() , first.end() , result.begin());

    cout << "partial sum is: " ;
    for(int i:result){
        cout << i << " ";
    }
    cout << endl;

    //iota() -> fills a range with incrementing values
    vector<int> temp(7);
    iota(temp.begin() , temp.end(),100);
    
    for(int i:temp){
        cout << i << " ";
    }
    cout << endl;



    return 0;
}