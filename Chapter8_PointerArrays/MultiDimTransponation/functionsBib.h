//
//  functionsBib.h
//  MultiDimArrayPointers
//
//  Created by applex on 31.07.21.
//

int *createArray(unsigned int length, int value);

void *freeArray(int *array);

void printArray(int *array, unsigned int length);



int **createMatrix(unsigned int num_rows, unsigned int num_cols, int value);

int **freeMatrix(int **matrix, unsigned int rows);

void printMatrix(int **matrix, int num_rows, int num_cols);

int **transposeMatrix(int **matrix, int num_rows, int num_cols);
