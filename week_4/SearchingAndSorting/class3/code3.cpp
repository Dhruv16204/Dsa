//    ODD OCCURING ELEMENT

// 1. All elements occurs even number of times except one 
// 2. elements repeats itself in pairs
// 3. no pair repeats itself, no number occur more than 2 times in a single stretch
// 4. find element that occur odd times

#include<iostream>
#include<vector>
using namespace std;

int findOddOccuringElement(vector<int> &arr){
    int n = arr.size();
    int s = 0;
    int e = n-1;
    int mid = s  + (e-s)/2;

    while(s<=e){
        if(s==e){
            //yahi element odd wala hai
            return s;
        }

        //ye dono extreme left and right position ko handle karne ke liye hai
        int leftValue = -1;
        int rightValue = -1;
        int currentValue = arr[mid];
        if(mid-1>=0){
            leftValue = arr[mid-1];
        }
        if(mid+1 < n){
            rightValue = arr[mid+1];
        }


        if(currentValue != leftValue && currentValue != rightValue){
            return mid;
        }

        //pair ke right element par hai. i.e -> (2,2) hum second 2 par hai
        if(mid-1>=0 && currentValue == leftValue){
            int pairStartingIndex = mid-1;
            if(pairStartingIndex & 1){
                //pair starting index odd
                //i am standing at right part
                //move to left
                e = mid-1;
            }
            else{
                //pair even hai
                //i am standing at left part
                //move to right
                s = mid+1;
            }
        }

        //pair ke left element par hai. i.e -> (2,2) hum first 2 par hai
        if(mid+1<n && currentValue == rightValue){
            int pairStartingIndex = mid;
            if(pairStartingIndex & 1){
                //pair starting index odd
                //i am standing at right part
                //move to left
                e = mid-1;
            }
            else{
                //pair even hai
                //i am standing at left part
                //move to right
                s = mid+1;
            }
        }

        
        mid = s+(e-s)/2;
    }
    return -1;
}

int main(){

    vector<int> arr = {1,1,2,2,3,3,5,6,6};
    
    int ans = findOddOccuringElement(arr);

    cout << "output: " << ans << "  value: " << arr[ans] << endl;

    return 0;
}


        // if(mid%2==0){
        //     if(mid+1<n &&arr[mid] == arr[mid+1]){
        //         s = mid+1;
        //     }
        //     else{
        //         e = mid-1;
        //     }
        // }
        // if(mid%2 !=0){
        //     if(mid-1>=0 && arr[mid] == arr[mid-1]){
        //         s = mid+1;
        //     }
        //     else{
        //         e = mid-1;
        //     }
        // }