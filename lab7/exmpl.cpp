#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int leftSize = mid - left + 1, rightSize = right - mid;
    int l = 0, r = 0, i = left;
    int leftArr[leftSize], rightArr[rightSize];

    for(int i = 0; i < leftSize; i++)
        leftArr[i] = arr[left + i];

    for(int i = 0; i < rightSize; i++)
        rightArr[i] = arr[mid + 1 + i];

    while(l < leftSize and r < rightSize)
        if(leftArr[l] < rightArr[r])
            arr[i++] = leftArr[l++];
        else
            arr[i++] = rightArr[r++];

    while(l < leftSize)
        arr[i++] = leftArr[l++];

    while(r < rightSize)
        arr[i++] = rightArr[r++];
}

void mergeSort(int arr[], int left, int right) {
    if(left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

...