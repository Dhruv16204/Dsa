#include<iostream>
using namespace std;

void checkThreeSum(int a[], int n, int t){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(a[i]+ a[j]+ a[k] == t){
                    cout<<a[i]<<", "<<a[j]<<", "<<a[k]<<endl;
                }
            }
        }
    }
}
int main(){
    int arr[]={10,20,30,40};
    int size=4;
    checkThreeSum(arr,size,60);
    return 0;
} 