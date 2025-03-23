 #include<iostream>
 using namespace std;

void printAllPairs(int a[] , int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout <<"("<< a[i] << "," << a[j] << ")" << "  ";
        }
        cout << endl;
    }
}

 int main(){
    int arr[100];
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    for(int i=0;i<size;i++){
        cout << "Enter the element at index " << i <<": ";
        cin >> arr[i];
    }
    printAllPairs(arr , size);

    return 0;
 }