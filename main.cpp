#include <iostream>
#include "QuickSort.h"

using namespace std;

int main() {
    QuickSort qs;

    qs.readFile("Array.txt");
    qs.displayArray();
    qs.sort();
    qs.displayArray();
    qs.writeFile();
    return 0;
}