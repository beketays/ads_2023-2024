#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool isPrime(int n){
    if(n==0 || n==1) {
        return false;
    }
    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;

}

int main(){

    vector<int> prime;
    for(int i = 0; i<100000; i++){
        if(isPrime(i)){
            prime.push_back(i);
        }
    }

    vector<int> superprime;
    for(int i=0; i<prime.size(); i++) {
        if(isPrime(i+1)){
            superprime.push_back(prime[i]);
        }
    }

    int a;
    cin >> a;

    cout << superprime[a-1] << " ";
    
  
    

}