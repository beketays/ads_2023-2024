/*#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if(n==0 or n==1) {
        return false;
    }

    for(int i=2; i <= sqrt(n); i++) {
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}

int main() {

    int n;
    cin >> n;

    if(isPrime(n)) {
        cout << "Yes";
    }
    else {
        cout << "NO";
    }



    return 0;
}
*/
#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if(n == 0 or n == 1) return false;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n; cin >> n;

    if (isPrime(n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
