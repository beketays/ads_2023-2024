#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int matrix[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            matrix[i][j] = 0;
        }
    }

    while(m--){
        int u, v;
        cin >> u >> v;
        matrix[u][v] = 1;
        matrix[v][u] = 1;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}