#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <string>
#include "Sort.h"

class QuickSort: public Sort {
    public:
        void partition(int, int);
        void sort(int, int);
};

#endif