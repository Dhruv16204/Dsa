#include<iostream>
using namespace std;
//linear search for extreme Printing
void extremePrint(int a[],int n){
    int i=0;
    int j=n-1;
    //method-1
    // while(i<=j){
    //     cout<<a[i]<<" ";
    //     i++;
    //     if(j>i){
    //         cout<<a[j]<<" ";
    //     j--;
    //     }
    // }
    
    //method-2
    while(i<=j){
        if(i<=j){
            if(i==j){
                cout<<a[i]<<" ";
                break;
            }
            else{
                cout<<a[i]<<" ";
                i++;
                cout<<a[j]<<" ";
                j--;
            }
        }
    }
}
int main(){
    int arr[]={10,20,30,40,50,60,70};
    int size=7;
    extremePrint(arr,size);
    return 0;
}