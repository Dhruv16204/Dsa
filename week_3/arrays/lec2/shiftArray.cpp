#include<iostream>
using namespace std;

void shifArray(int a[] , int size , int n){
    // n is the elements to shift
    n=n%size; //n>size , ex: if n=7 then it would equal to shifting element by one place

    if(n==0){
        // no need to do anything
        return;
    }

    // step-1 : copy last elements into temp array
    int temp[100];
    int index = 0;
    for(int i=size-n;i<size;i++){
        temp[index] = a[i];
        index++;
    }

    //step-2 : shift elements by n places
    for(int i=size-1;i>=0;i--){
        if(i-n >=0 ){
         a[i] = a[i-n];
        }
    }

    //step-3 : copy temp array into orignal array
    for(int i=0;i<n;i++){
        a[i] = temp[i];
    }
}

int main() {
    int arr[100];
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    for(int i=0;i<size;i++){
        cout << "Enter the element at index " << i <<": ";
        cin >> arr[i];
    }
    int n;
    cout << "enter the number of places to shift an array: " ;
    cin >> n;
    shifArray(arr , size , n);

    // printing 
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    return 0;
}