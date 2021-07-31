#include <stdio.h>

int main(void){

    //Initialisierung 1D Array
    int array[5];

    for(int i = 0; i<5; i++){
        array[i] = i;
    }

    for(int i = 0; i<5; i++){
        printf("%d\n", array[i]);
    }

    printf("\n");
    //Zweidimensionales Array
    int field[5][3] = {
        {3, 4, 2},
        {1, 4, 5},
        {0, 3, 2},
        {8, 4, 1},
        {7, 4, 2},
    };

    for (int row = 0; row < 5; row++){
        for(int col = 0; col < 3; col++){
            printf("%d\n", field[row][col]);
        }
    }

    //Größe eines Arrays berechenn
    int columns = sizeof(field[0]) / sizeof(int);
    int rows = sizeof(field) / sizeof(field[0]);

    printf("ROWS: %d", rows);
    printf("COLUMNS: %d", columns);

    return 0;
}
