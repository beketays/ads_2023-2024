//DFS
#include <iostream>
#include <vector>
using namespace std;

vector<bool> visited; 
vector<vector<int> > adjList;

void dfs(int v) {
    // do smth
    visited[v] = true;
    cout << v << " ";
    for(int i = 0; i < adjList[v].size(); i++) {
        int u = adjList[v][i];
        if(!visited[u]) {
            dfs(u);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    adjList.resize(n); // {{},{},{}}
    visited.resize(n);

    while(m--) {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    
    for(int i=0; i<n; i++) {
        if(!visited[i]) {
            cout << "Component: " << i << "\n";
            dfs(i);
        }
    }
    return 0;
}
