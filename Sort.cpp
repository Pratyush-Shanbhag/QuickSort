#include <iostream>
#include "Sort.h"

using namespace std;

void Sort::displayArray() {
    cout << "Array:\n[";

    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }

    cout << arr[9] << "]\n" << endl; 
}