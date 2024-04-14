#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int binary_search(int a[], int target, int n){
    int left = 0, right = n - 1;
  while (left <= right){
    int mid = left + (right - left) / 2;
    if (a[mid] >= target) right = mid - 1;
    else left = mid + 1;
  }
  return left;
}

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x; 
        v.push_back(x);
    }
    int res[n];
    res[0] = v[0];
    for(int i = 1; i < v.size(); i++){
        res[i] = v[i] + res[i - 1]; 
    }
    for(int j = 0; j < k; j++){
        int y;
        cin >> y;
        cout << binary_search(res, y, n) + 1 << "\n";
    }
}