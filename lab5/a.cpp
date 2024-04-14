#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    int x;
    priority_queue<long long, vector<long long>, greater<long long> > pq;
    for(int i = 0; i<n; i++) {
        cin >> x;
        pq.push(x);
    }
    //cout << pq.size();

    long long sum = 0;
    while(pq.size() != 1){
        long long a = pq.top();
        pq.pop();
        long long b = pq.top();
        pq.pop();
        sum = a+b+sum;
        pq.push(a+b);
        
    }
    cout << sum;


}