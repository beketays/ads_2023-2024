#include <iostream>
using namespace std;

bool check(long long target, int roadblocks, int a[], int n){
    long long cnt = 0, sum = 0;
    for(int i=0; i<n; i++) {
        sum += a[i];
        if(sum > target) {
            cnt++;
            sum = a[i];
        }
    }
    if(cnt > roadblocks) {
        return false;
    }
    else {
        return true;
    }
    
}

int main() {
    int n; 
    cin >> n;
    int a[n];
    long long sum = 0, max = 0, cnt = 0;
    cin >> cnt;
    for(int i=0; i<n; i++) {
        cin >> a[i];
        sum += a[i];
        if(a[i] > max) {
            max = a[i];
        }
    }
    long long  left = max, right = sum;
    while(left <= right) {
        long long mid = (left+right) / 2;
        if(check(mid, cnt - 1, a, n) == true) {
            right = mid - 1;
        } 
        else {
            left = mid + 1; 
        }
    }
    cout << left;
}