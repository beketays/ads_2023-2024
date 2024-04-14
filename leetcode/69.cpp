// sqrt binary search
#include <iostream>
using namespace std;

int mySqrt(int x) {
        if(x == 0) 
            return x;
        int left = 1, right = x;

        while(left <= right) {
            int mid = (left+right) / 2;
            if(mid == x / mid) {
                return mid;
            }
            else if(mid > x / mid) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }

    return right;
}

int main() {
    int n; 
    cin >> n;
    
    cout << mySqrt(n);
}
