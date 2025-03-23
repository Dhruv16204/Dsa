//upper -> lower and lower -> upper case

#include<iostream>
#include<cstring> 
using namespace std;

void toUpperCase(char arr[] , int size){

    int n = strlen(arr);
    for(int i=0;i<n;i++){
        // agar char lower letter hai tabhi convert karo
        if(arr[i] >= 'a' && arr[i] <= 'z'){
            arr[i] = arr[i] - 'a' + 'A';
        }
    }
}

void toLowerCase(char arr[] , int size){

    int n = strlen(arr);
    for(int i=0;i<n;i++){
        // agar char upper letter hai tabhi convert karo
        if(arr[i] >= 'A' && arr[i] <= 'Z'){
            arr[i] = arr[i] - 'A' + 'a';
        }
    }
}

int main() {

    char arr[100];
    
    cout << "enter input: " ;
    cin >> arr;

   // toUpperCase(arr , 100);
    toLowerCase(arr , 100);
    cout << arr << endl;
    return 0;
}