#include <iostream>
#include <vector>
#include <deque>
using namespace std;

deque<int> cnt(int x){
    deque <int> deq;
    deq.push_back(x);
    int a = 1;
    while(deq.size() != x){
        deq.push_front(x - a);
        int i = deq.front();
        while( i > 0){
            int temp = deq.back();
            deq.pop_back();
            deq.push_front(temp);
            i--;
        }
        a++;
    }
    return deq;
}
int main(){
    int n; cin >> n;
    vector <deque<int>> v;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(cnt(x));
    }
    for (int i = 0;i < v.size(); i++){
        while (!v[i].empty()){
            cout<<v[i].front()<<" ";
            v[i].pop_front();
        }
        cout << endl;

    }
}