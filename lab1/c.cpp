#include <iostream>
#include <string>
using namespace std;

string func(string s) {
    string result;
    for(int i=0; i<s.size(); i++) {
        if(s[i] == '#') {
            if(!result.empty()) {
                result.pop_back();
            }
        }
        else {
            result.push_back(s[i]);
        }
    }
    return result;
} 

int main() {
    string str, str2;
    cin >> str >> str2;

    string res = func(str);
    string res2 = func(str2);

    if(res == res2) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}