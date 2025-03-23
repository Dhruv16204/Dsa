// Given a fence with n posts and k colors, the task is to find out the number of ways 
// of painting the fence so that not more than two consecutive posts have the same color.
// Input: n = 2, k = 4
// Output: 16
// Explanation: We have 4 colors and 2 posts.
// Ways when both posts have same color: 4 
// Ways when both posts have diff color: 4(choices for 1st post) * 3(choices for 2nd post) = 12

#include<iostream>
using namespace std;

int solve(int n , int k){
    //base case
    if(n == 1){ //agar ek hi fence hai to k color paint kar sakte hai
        return k;
    }
    if(n == 2){ // 2 fence hai to:same color->k ways and diff color->k(k-1) ways. Total->k+k(k-1)->k*k
        return k*k;
    }

    //case-1:last post has same color as previous.
    //matlab n-2 fence ko k color kiya ho to last dono fence ko k-1 se paint kar sakte hai.
    int case1 = (k-1)*solve(n-2,k);
    //case-2:last post has diff color than previous
    //matlab n-1 fence ko k color kiya ho to last fence ko k-1 ways me paint kar sakte hai.
    int case2 = (k-1)*solve(n-1,k);

    return case1+case2;
}


int main() {

    int n , k;
    cout <<"Enter the no. of Posts(n): ";
    cin >> n;
    cout << "Enter the no. of colors(k): ";
    cin >> k;

    cout << solve(n,k) << endl;

    return 0;
}