#include <iostram>
using namespace std;

bool prime(int n) {
    if(n <= 1) {
        return false;
    }
    for(int i = 2; i*i <= n; i++) {
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}
int main() {

    int x;
    cin >> x;

    int cnt = 0;
    int n = 2;

    while(cnt < x) {
        if (prime(n)) {
            cnt ++;
            if (cnt == x) {
                cout << num;
                break;
            }
        }
        x ++;
    }
    
    return 0;
}

