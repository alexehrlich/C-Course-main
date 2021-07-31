//
//  functionsBib.c
//  MultiDimArrayPointers
//
//  Created by applex on 31.07.21.
//

#include "functionsBib.h"
#include <stdlib.h>
#include <stdio.h>


//1D-Arrays
int *createArray(unsigned int length, int value){
    
    int *p_array = (int *)malloc(length * sizeof(value));
    
    for(int i = 0; i < length; i++){
        p_array[i] = value + i;
    }
    return p_array;
}

void *freeArray(int *array){
    free(array);
    array = NULL;
    
    return array;
}

void printArray(int *array, unsigned int length){
    printf("[ ");
    for(int i = 0; i < length; i++){
        printf("%d ", array[i]);
    }
    
    printf("]");
}

//"D-Arrays - Matrix
int **createMatrix(unsigned int num_rows, unsigned int num_cols, int value){
    
    int **p_matrix = (int **)malloc(num_rows * sizeof(int *));
    
    for(int i = 0; i < num_rows; i++){
        p_matrix[i] = createArray(num_cols, i * num_cols + 1);
    }
    return p_matrix;
}


int **freeMatrix(int **matrix, unsigned int rows){
    
    for(int i = 0; i < rows; i++){
        freeArray(matrix[i]);
        matrix[i] = NULL;
    }
    
    free(matrix);
    matrix = NULL;
    
    return matrix;
}

void printMatrix(int **matrix, int num_rows, int num_cols){
    for(int i = 0; i < num_rows; i++){
        printArray(matrix[i], num_cols);
        printf("\n");
    }
}

int **transposeMatrix(int **matrix, int num_rows, int num_cols){
    
    int **transposedMatrix = createMatrix(num_cols, num_rows, 0);
    
    for(int i = 0; i < num_cols; i ++){
        for(int j = 0; j < num_rows; j ++){
            transposedMatrix[i][j] = matrix[j][i];
        }
    }
    return transposedMatrix;
}
