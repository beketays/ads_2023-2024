#include <iostream>
#include <vector>

using namespace std;

// Binary search function
int binarySearch(const vector<int>& arr, int x) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = (right + left) / 2;

        if (arr[mid] == x) {
            return mid; // Found x at index mid
        } 
        else if (arr[mid] < x) {
            left = mid + 1; // Adjust the left boundary
        } else {
            right = mid - 1; // Adjust the right boundary
        }
    }

    return -1; // x is not in the array
}

int main() {
    // Input the sorted array from the console
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Input the number to search for
    int x;
    cin >> x;

    // Perform binary search
    int result = binarySearch(arr, x);

    // Output the result
    if (result != -1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}