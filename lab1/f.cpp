#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    /*if (n <= 0) {
        cout << "Invalid input. Please enter a positive integer for n." << endl;
        return 1;
    }*/

    int cnt = 0;
    int num = 2; // Start with the first prime number

    while (cnt < n) {
        if (isPrime(num)) {
            cnt++;
            if (cnt == n) {
                cout << num << endl;
                break;
            }
         }
        num++;
    }

    return 0;
}



