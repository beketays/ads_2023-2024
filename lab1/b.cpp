#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    stack <int> ansr;
    while(!v.empty()){
        stack <int> st;
        int i = -1;
        while(!ansr.empty()){
            if(ansr.top() <= v.front()){
                i = ansr.top();
                break;
            }
            int t = ansr.top();
            ansr.pop();
            st.push(t);
        }
        while(!st.empty()){
            ansr.push(st.top());
            st.pop();
        }
        ansr.push(v.front());
        v.erase(v.begin());
        cout << i << ' ';
    }
}