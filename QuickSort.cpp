#include <iostream>
#include "QuickSort.h"

using namespace std;

void QuickSort::swap(int* p1, int* p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int QuickSort::partition(int lindex, int rindex) {
    int pivot = arr[rindex];
    int i = lindex - 1;

    for (int j = lindex; j < rindex; j++) {
        if (arr[j] <= pivot && ++i != j) {        
            swap(&arr[i], &arr[j]);
        }
  }

  swap(&arr[++i], &arr[rindex]);
  
  return i;
}

void QuickSort::quickSort(int lindex, int rindex) {
    if (lindex < rindex) {
        int pivot = partition(lindex, rindex);

        quickSort(lindex, pivot - 1);

        quickSort(pivot + 1, rindex);
  }
}

void QuickSort::sort() {
    quickSort(0, static_cast<int>(sizeof arr / sizeof arr[0]));
}