#include <iostream>
#include <deque>
#include <map>
using namespace std;
int main () {
    int a; cin >> a;
    string s; cin >> s;
    deque <char> deq;
    map <char, int> mp, error;

    for (int i = 0; i < s.size(); i++) {
        deq.push_back(s[i]);
        mp[s[i]]++;
    }
    while (mp['S'] > 0 && mp['K'] > 0) {

        if (error[deq.front()] > 0) {
            error[deq.front()]--;
            mp[deq.front()]--;
            deq.pop_front();
        }
        else {
            if (deq.front() == 'S') {
                error['K']++;
            } else {
                error['S']++;
            }
            deq.push_back(deq.front());
            deq.pop_front();
        }
    }

    if (mp['S'] != false) {
        cout << "SAKAYANAGI";
    } 
    else {
        cout << "KATSURAGI";
    }
}