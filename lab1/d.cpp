#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<char> stck;
    string s;
    cin >> s;

    for(int i=0; i<s.size(); i++) {
        if(!stck.empty()) {
            if(stck.top() == s[i]) {
                stck.pop();
            }
            else {
                stck.push(s[i]);
            }
        }
        else {
            stck.push(s[i]);
        }
    }

    if(stck.empty()) {
        cout << "Yes";
    }
    else {
        cout << "NO";
    }
}