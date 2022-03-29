#ifndef SORT_H
#define SORT_H

class Sort {
    public:
        int arr[10];
    
    public:
        virtual void sort() = 0;
        void displayArray();
};

#endif