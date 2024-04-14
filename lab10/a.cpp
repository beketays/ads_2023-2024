
#include <iostream>
using namespace std;
int main() {
    int n, q; 
    cin >> n >> q;
    int matrix[n][n];
    for(int i = 0; i < n; i++) {  
        for(int j = 0; j< n; j++) {
            cin >> matrix[i][j];
        }
    }

    while(q--) {
        int a, b, c;
        cin >> a >> b >> c;
        a--;
        b--;
        c--;
        if(matrix[a][b] == 1 && matrix[b][c] == 1 && matrix[a][c] == 1){
            cout << "Yes";
        }
        else {
            "No";
        }
    }
}