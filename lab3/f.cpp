#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){                                       
        cin >> arr[i];
    }
    sort(arr, arr + n);

    int i = 0, rounds , power;
    cin >> rounds;

    while (i < rounds){
        int l = 0 , r = n - 1;
        int sum = 0, cnt = 0;
        cin >> power;
        while(l<=r){                                                   
            int mid = (l+r)/2;
            if(arr[mid] <= power){
                for(int j=l ; j<=mid; j++){
                    sum+=arr[j];
                    cnt++;
                }
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
            
        }
        cout << cnt << " " << sum << endl;
        i++;
    }
  
}