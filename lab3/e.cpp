#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int>result;
    
    while(n--){
        int x=4;
        vector<int>v;
        while(x--){
            int y;
            cin>>y;
            v.push_back(y);
        }
        sort(v.begin(),v.end());
        result.push_back(v[v.size()-1]);
    }
    sort(result.begin(),result.end());
    cout<<result[k-1];
}