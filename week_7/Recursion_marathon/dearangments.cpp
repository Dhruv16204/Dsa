#include<iostream>
using namespace std;

int solve(int n) {
    //base case
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }

    //(n-1)=> if total n no. hai to usko dusre position me rakhne ke ways n-1 hai
    //solve(n-2)=>agar no. ko dusre no. se swap kiya to total n-2 no. ko arrange kar skte hai
    //solve(n-1)=> no. ko koi bhi random position me rakh liya .
    int ans = (n-1)*(solve(n-2) + solve(n-1));
    return ans;
}

int main() {
    
    int n;
    cin >> n;

    cout << solve(n) << endl;

    return 0;
}