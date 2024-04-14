#include <iostream>
using namespace std;

string heapify(string s, int size, int parent){
    int largest = parent;
    int left = parent * 2 + 1;
    int right = parent * 2 + 2;

    if(left < size && s[left] > s[largest]){
        largest = left;
    }
    if(right < size && s[right] > s[largest]){
        largest = right;
    }

    if(parent != largest){
        swap(s[largest], s[parent]);
        s = heapify(s, size, largest);
    }
    return s;
}

string heapSort(string s, int size) {
    for(int i = size / 2 - 1; i >= 0; i--) {
        s = heapify(s, size, i);
    }

    for(int i = size - 1; i >= 0; i--) {
        swap(s[0], s[i]);
        s = heapify(s, i, 0);
    }
    return s;
}


int main() {
    int n; cin >> n;
    string s; cin >> s;
    
    string a = heapSort(s, n);

}