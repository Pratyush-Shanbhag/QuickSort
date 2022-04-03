#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <string>
#include "Sort.h"

class QuickSort: public Sort {
    public:
        void swap(int*, int*);
        int partition(int, int);
        void quickSort(int, int);
        void sort();
};

#endif