#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void printDouble(int a){
    cout << 2*a << " ";
}

bool  checkEven(int a){
    return a%2 == 0;
}

int main() {

    vector<int> arr(5);
    arr[0] = 11;
    arr[1] = 40;
    arr[2] = 30;
    arr[3] = 20;
    arr[4] = 12;

    //for_each loop
    for_each(arr.begin() , arr.end() , printDouble);
    cout << endl;

    //find()
    int target = 30;
    //vector<int>::iterator it = find(arr.begin() , arr.end() , target);
    //use auto instead of  vector<int>::iterator(bcz we are aalsi)
    auto it = find(arr.begin() , arr.end() , target);
    cout << *it << endl;  //if target not found then returns 0

    //find_if() -> searches for the FIRST element that satisfies the condition -> here condition is given in function format
    auto it2 = find_if(arr.begin() , arr.end() , checkEven);
    cout << *it2 << endl;

    //count() -> counts the occurence of target value in given range
    int target2 = 11;
    int ans = count(arr.begin() , arr.end() , target2);
    cout << ans << endl;

    //count_if() -> counts by given criteria
    int ans2 = count_if(arr.begin() ,arr.end() , checkEven);
    cout << ans2 << endl;

    //sort() -> sort the elements in acending order 
    sort(arr.begin() , arr.end());
    for(int a : arr){
        cout << a << " ";
    }
    cout << endl;

    //reverse() -> reverse the array
    reverse(arr.begin() , arr.end());
    for(int a : arr){
        cout << a << " ";
    }
    cout << endl;


    vector<int> arr2(6);
    arr2[0] = 10;
    arr2[1] = 20;
    arr2[2] = 30;
    arr2[3] = 40;
    arr2[4] = 50;
    arr2[5] = 60;

    //rotate() -> rotate the array in right by n position
    rotate(arr2.begin() , arr2.begin()+2, arr2.end());
    cout << "after rotating: " ;
    for(int a : arr2){
        cout << a << " ";
    }
    cout << endl;

    vector<int> arr3(6);
    arr3[0] = 11;
    arr3[1] = 11;
    arr3[2] = 11;
    arr3[3] = 22;
    arr3[4] = 22;
    arr3[5] = 33;

    //unique -> removes duplicate elements from sorted range -> returns an iterator
    auto it3 = unique(arr3.begin() , arr3.end());
    //it iterator ke pehle saare unique elements hai 
    // it k baad saare duplicate elements hai
    arr3.erase(it3 , arr3.end()); //-> duplicate ko remove kardiya
    for(int i : arr3){
        cout << i << " ";
    }
    cout << endl;

    vector<int> arr4(6);
    arr4[0] = 10;
    arr4[1] = 11;
    arr4[2] = 12;
    arr4[3] = 13;
    arr4[4] = 14;
    arr4[5] = 15;

    //partition() -> divides elements into two groups based on a predicate -> returns an iterator
    auto it4 = partition(arr4.begin() , arr4.end(), checkEven);
    for(int i : arr4){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}