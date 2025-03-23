#include<iostream>
using namespace std;

void moveAllNegToLeft(int a[] ,int n){ //two pointer approach(dutch national flag)
    int l=0;
    int h=n-1;

    while(l<h){
        if(a[l] < 0){
            l++;
        }
        else if(a[h] > 0){
            h--;
        }
        else{
            swap(a[l] , a[h]);
        }
    }
}

int main(){
    int a[] = {1,-5,6,-5,7,9,3,-8,-23};
    int n = sizeof(a)/sizeof(int);
    moveAllNegToLeft(a , n);
    //print 
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}