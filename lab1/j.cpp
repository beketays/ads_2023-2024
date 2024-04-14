#include <iostream>
#include <cmath>
#include <deque>
using namespace std;

int main () {
    char c;
    int x;
    bool ok = true;
    deque<int> deq;
    while (ok) {
        cin >> c;
        if (c == '+') {
            cin >> x;
            deq.push_front(x);
        }
        if (c == '-') {
            cin >> x;
            deq.push_back(x);
        }
        if (c == '*') {
            if (deq.empty()) {
                cout << "error" <<endl;
            }
            else {
            cout << deq.front() + deq.back() << endl;
            if (!deq.empty()) deq.pop_front();
            if (!deq.empty()) deq.pop_back();
            }
        }
        if (c == '!') {
            ok = false;
        }
    }
}