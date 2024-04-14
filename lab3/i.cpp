#include <iostream>
using namespace std;

bool BinarySearch(int n, int arr[], int target){
    int left = 0, right = n - 1;

    while(left <= right) {
        int mid = (left + right) / 2;

        if(target > arr[mid]){
            left = mid + 1;
        }
        else if(target < arr[mid]){
            right = mid - 1;
        }
        else{
            return true;
        }
    }
    return false;
}

int main(){

    // Data
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    int target; cin >> target;
        if(BinarySearch(n, arr, target) == true) {
            cout << "Yes";
        }
        else {
            cout << "No";
        }

}