#ifndef SORT_H
#define SORT_H

#include <string>

class Sort {
    public:
        int arr[10];
    
    public:
        void readFile(string fileName);
        void writeFile();
        virtual void sort() = 0;
        void displayArray();
};

#endif