// Time Complexity : O(2^log(n-1))

//Application : 1. search in unbounded array (infinite array)
//              2. x is near beginning (better than bs)

#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>&v , int s , int e , int x){
    int mid = s + (e-s)/2;
    
    while(s<=e){
        if(v[mid] == x){
            return mid;
        }
        else if(x > v[mid]){
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}


int expSearch(vector<int>&v , int n,int x){
    if(v[0] == x){
        return 0;
    }
    int i = 1;
    while(i < n && v[i] <= x){
            i *= 2;
    }
    return binarySearch(v , i/2 , min(i , n-1) , x);

    //another way if not know the end of the array
    // int i = 0;
    // int j = 1;
    // while(v[j] < x){
    //     i = j;
    //     j *= 2;
    // }
    // return binarySearch(v , i , min(j , n-1) , x);
    
}


int main(){
    vector<int> v = {3,6,7,10,25,26,27,29,31,45,67};
    int n = v.size();
    int x;
    cout << "Enter element to search: " ;
    cin >> x;

    int ans = expSearch(v , n , x);

    cout << "Element found at index: " << ans << endl;

    return 0;
}