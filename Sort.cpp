#include <iostream>
#include <fstream>
#include "Sort.h"

using namespace std;

void Sort::readFile(string fileName) {
    ifstream infile(fileName);
    int count = 0;
    while(!infile.fail()) {
        infile >> arr[count++];
    }

    infile.close();
}

void Sort::writeFile() {
    ofstream outfile("SortedArray.txt");

    for(int i = 0; i < 10; i++) {
        outfile << arr[i] << endl;
    }
}

void Sort::displayArray() {
    cout << "Array:\n[";

    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }

    cout << arr[9] << "]\n" << endl; 
}