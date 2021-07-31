//
//  main.c
//  MultiDimArrayPointers
//
//  Created by applex on 31.07.21.
//

#include <stdio.h>
#include <stdlib.h>
#include "functionsBib.h"


int main(int argc, const char * argv[]) {
    
    int num_rows = 3;
    int num_cols = 3;
    
    int **myMatrix = createMatrix(num_rows, num_cols, 1);
    printMatrix(myMatrix, num_rows, num_cols);
    
    printf("Transposed Matrix:\n");
    int **transposedMatrix = transposeMatrix(myMatrix, num_rows, num_cols);
    printMatrix(transposedMatrix, num_cols, num_rows);
    
    //Manipulate the matrix
    
    printf("Manipulate one value:\n");
    transposedMatrix[0][0] = 0;
    printMatrix(transposedMatrix, num_cols, num_rows);
    
    //Set one complete new array as a row:
    printf("Manipulate one row at once with a new pointer_array:\n");
    
    int *p_newRowArray = (int *)malloc(num_cols * sizeof(int));
    
    for(int i = 0; i < num_cols; i++){
        p_newRowArray[i] = 0;
    }
    transposedMatrix[num_rows - 1] = p_newRowArray;
    printMatrix(transposedMatrix, num_cols, num_rows);
    
    //The number of rows of the transposed matrix is the number of cols of the normal matrix and vice versa
    myMatrix = freeMatrix(myMatrix, num_rows);
    transposedMatrix = freeMatrix(transposedMatrix, num_cols);
    
    return 0;
}
