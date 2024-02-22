//
// Created by hloi on 2/15/2024.
//
#include <iostream>

#include "TwoDArray.h"

using namespace std;

//int* expand(int* ar, int size) {
//    int newSize = size*2;  // double the size
//    int* arr = new int[newSize]; // use square parenthesis
//    for (int i=0; i<size; i++) {
//        *(arr+i) = *(ar+i);
//    }
//    for (int i=size; i<newSize; i++) {
//        *(arr+i) = 0;
//    }
//    delete ar;  // delete old array
//    return arr; // return new array
//
//}
//
//
void print(double *ar, int size) {
    for (int i=0; i<size; i++) {
        cout << *(ar + i) << endl;
    }
}
void set_row(double *the_array, int row_num, int col_size, double *row_vals) {
        int rowNum = row_num * col_size;

        for (int col=0; col<col_size; col++) {
            *(the_array + rowNum + col) =  *(row_vals + col);
        }

}

double *get_row(double *the_array, int row_num, int col_size) {
    return the_array + row_num * col_size;
}

void print2d(double *ar, int rowSize, int colSize ) {
    for (int row=0; row<rowSize; row++) {
        int rowNum = row * colSize;
        for (int col=0; col<colSize; col++) {
            cout << *(ar + rowNum + col) << " ";
        }
        cout << endl;
    }
}