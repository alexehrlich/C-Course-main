#include <stdio.h>
#include <stdlib.h>


/*Mehrdimensinale Arrays können ineffizent beim LAden in den Cache sein. Der Cach hat zum Beispiel 64 Byte und lädt
 immer hinteinanderliegende Blöcke. Bei mehrdimensionalen Pointer_Arrays sind die einzelnen Blöcke verteilt. simt braucht
 die CPU mehr LAdeoperationen. Zudem wird bei Speicherplatz benötigt, da für jede Zeile ein eigener Pointer abgespeichert werden muss.

Abhilfe: Mapping von 2D-Array auf 1D Array
*/

//define-Makro for mapping:
#define length 6
#define matrix(row, col) matrix[col + length * row]

int *createMappedMatrix(int num_rows, int num_cols){

    int *matrix = (int *)malloc(num_cols * num_rows * sizeof(int));

    for(int i = 0; i < num_rows; i ++){
        for(int j = 0; j < num_cols; j++){
            matrix(i, j) = 5;
        }
    }

    return matrix;
}

void printMappedMatrix(int *matrix, int num_rows, int num_cols){

    for(int i = 0; i < num_rows; i++){
        printf("[ ");
        for(int j = 0; j < num_cols; j++){
            printf("%d ", matrix(i, j));
        }
        printf("]\n");
    }
}

int main(void){

int *matrix = createMappedMatrix(5, length);
printMappedMatrix(matrix, 5, length);

    return 0;
}
