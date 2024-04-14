#include <iostream>
using namespace std;

void heapify(int arr[], int size, int parent) {
    int largest = parent;
    int left = parent * 2 + 1;
    int right = parent * 2 + 2;

    // Является ли левый потомок больше текущего
    if(left < size and arr[left] > arr[largest]){
        largest = left;
    }
    // Будет ли правый потомок больше largest
    if(right < size and arr[right] > arr[largest]){
        largest = right;
    }

    if(parent != largest){
        swap(arr[largest], arr[parent]);
        heapify(arr, size, largest);
    }
}

void heapSort(int arr[], int size) {
    // Building Heap
    for(int i = size / 2 - 1; i >= 0; i--) {
        heapify(arr, size, i);
    }
    
    // Sorting
    for(int i = size - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main(){
  int n = 12;
  int arr[n] = {5, 9, 1, 7, 2, 3, 11, 10, 12, 4, 8, 6};

  heapSort(arr, n);

  cout << "Sorted array:\n";
  for(int i = 0; i < n; i++)
    cout << arr[i] << " ";
}