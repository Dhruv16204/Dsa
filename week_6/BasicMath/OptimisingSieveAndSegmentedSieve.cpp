//T.C --> O(nlog(logn))

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

vector<bool> Sieve(int n){
    //creating sieve array of size n -> intially all true
    vector<bool> sieve(n+1 , true);
    sieve[0] = sieve[1] = false;

    //optimization-2 -> instead of i<=n go with root(n) -> ex: root(25) -> 5;
    //i <= root(n) -> dono sideXq    sqare -> i*i <= n
    for(int i=2;i*i<=n;i++){
        if(sieve[i] == true){
            // i ke multiple table ko false mark karna hoga
            //int j = 2*i;
            int j = i*i; //optimization-1 -> first unmarked would be i*i
            while(j<=n){
                sieve[j] = false;
                j += i;
            }
        }
    }   
    return sieve;
}


vector<bool> segmentedSieve(int L , int R){
    //first get the base primes to
    //marks the prime in segmented sieve
    vector<bool> sieve = Sieve(sqrt(R));
    vector<int> basePrimes;
    for(int i=0;i<sieve.size();i++){
        if(sieve[i]){
            basePrimes.push_back(i);
        }
    }

    // ab baseprime array ki help se segmented sieve me prime 
    // mark karna hoga
    vector<bool> segSieve(R-L+1 , true);
    if(L == 1){
        segSieve[0] = false;
    }

    for(auto prime : basePrimes){
        int firstMultiple = (L/prime)*prime;  //this will give the first multiple of prime no.
        if(firstMultiple < L){
            firstMultiple += prime;
        }

        int j = max(firstMultiple , prime*prime);
        while(j <= R){
            segSieve[j-L] = false;
            j += prime;
        }
    }
    return segSieve;
}


int main() {
    int n = 25;
    vector<bool> prime = Sieve(n);
    cout << "Prime Numbers are: " << endl;
    for(int i=0;i<=n;i++){
        if(prime[i]){
            cout << i << " ";
        }
    }
    cout << endl;

    // for segmented sieve
    int L = 110;
    int R = 130;
    vector<bool>ss = segmentedSieve(L , R);
    for(int i=0;i<ss.size();i++){
        if(ss[i]){
            cout << L + i << " " ;
        }
    }
    cout << endl;

    return 0;
}