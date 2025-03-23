#include<iostream>
#include<vector>
using namespace std;

vector<int> twosComp(vector<int> arr , int n){
    vector<int> ans(n+1,0);

    //step 1: filp the bits
    for(int i=n-1 , k=ans.size()-1; i>=0 ; i-- ,k--){
        ans[k] = arr[i] == 0 ? 1 : 0;
        //i have filp the bits which is in ans
    }

    //step 2: add 1 in ans from last element
    int carry = 1;
    for(int i=ans.size()-1 ; i>=0 ;i--){
        int sum = ans[i] + carry;
        ans[i] = sum % 2;
        carry = sum/2;
    }
    if(carry == 1){
        ans[0] = carry;
    }

    return ans;
}

vector<int> twosCompSecondWay(vector<int> arr , int n){
    // idhar hum ip arr jitna hi size ka ans nikalenge //baki sub is same as above function
    vector<int> ans(n , 0);

    //step 1:filp the bits
    for(int i=0;i<n;i++){
        ans[i] = arr[i] == 0 ? 1 : 0;
    }

    //step 2 : add 1
    int carry = 1;
    for(int i= n-1;i>=0;i--){
        int sum = ans[i] + carry;
        ans[i] = sum % 2;
        carry = sum / 2;

        //optimization
        if(carry == 0){
            break;
        }
    }

    return ans;
}

int main(){

    vector<int> arr = {0,1,1,0};
    int n = arr.size();

    //vector<int> ans = twosComp(arr , n);
    vector<int> ans = twosCompSecondWay(arr , n);

    for(int i=0;i<ans.size();i++){
        cout << ans[i];
    }
    cout << endl;


    return 0;
}