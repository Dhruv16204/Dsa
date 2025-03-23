#include<iostream>
using namespace std;
void printAllTriplets(int a[], int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                cout << a[i]<<","<<a[j]<<","<< a[k] << "  ";
                count++;
            }
            cout << endl;
        }
        cout << endl;
    }
    cout<<"total triplets printed: "<< count<<endl;
}
int main(){
    int arr[]={10,20,30,40};
    int size=4;
    printAllTriplets(arr,size);
    return 0;
} 