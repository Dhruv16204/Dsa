#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int mySqrt(int n){
    int s=0;
    int e=n;
    int mid = s+((e-s) >> 1);
    int ans = 0;

    while(s<=e){
        if(mid*mid <=n){
            ans = mid;
            s = mid+1; //go right
        }
        else {
            e = mid-1;
        }
        mid = s+((e-s) >> 1); //go left
    }
    return ans;
}

double myPrecision(int n){
    double sqrt = mySqrt(n);
    //precision
    int precision;
    cout << "enter upto Precision: " ;
    cin >> precision;

    double step = 0.1;
    while(precision !=0){
        double j = sqrt; //  j = n.0

        while(j*j <= n){
            sqrt = j;
            j += step ; // j -> n.1
        }
        
        //after above while loop ans got one precision
        step /= 10;
        precision--;
    }
    return sqrt;
}

double bsWithPrecision(int n){
    double s = 0;
    double e = n;
    double mid = e + (s-e)/2;
    double ans = 0;

    while((e-s) > 0.0000001){
        double sqr = mid*mid;

        if(sqr <= n){
            ans = mid;
            s = mid;
        }
        else{
            e = mid;
        }
        mid = e + (s-e)/2;
    }
    return ans;
}


int main(){

    int n = 63;
    //double ans = myPrecision(n);

    //cout only prints upto five precision
   // cout << ans << endl;

    //we can use printf just like in c
   // printf("square root with Precision:  %.10f\n" , ans);

    double ans = bsWithPrecision(n);
    printf("square root with Precision:  %.9f\n" , ans);    

    return 0;
}