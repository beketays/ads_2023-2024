#include <iostream>
#include <vector>
#include <vector>
using namespace std;

vector<bool> visited; 
vector<vector<int> > adjList;

void bfs(int v) {
    queue<int> q;
    q.push(v);
    visisted[v] = true;

    while(!q.empty()) {
        int front = q.front();
        q.pop();

        //do smth
        cout << front << " ";

        for(int i=0; i<adjList[front].size(); i++) {
            int u = adjList[front][i];
            if(!visited[u]) {
                visited[u] = true;
                q.push(u);
            }
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
    dfs(0);
    return 0;
}
