#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int> > list(n);
    // map<int, vector<int>> m;   not comfortable
    while(m--){
        int u, v;
        cin >> u >> v;
        list[u].push_back(v);
        list[v].push_back(u);

    }

    for(int i = 0; i < n; i++){
        cout << i << ": ";
        for(int j = 0; j < list[i].size(); j++){
            cout << list[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}