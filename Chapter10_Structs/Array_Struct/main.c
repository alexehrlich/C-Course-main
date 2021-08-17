#include <stdio.h>
#include <stdlib.h>

#include "ArrayFunctionsBib.h"

int main(void){

    Vector v1 = createVector(5, 0);

    v1.data[0] = -22;
    v1.data[1] = -12;
    v1.data[2] = 22;
    v1.data[3] = 318;
    v1.data[4] = 0;

    printVector(&v1);

    printf("MAX: %d\n", maxArray(&v1));
    printf("MIN: %d\n", minArray(&v1));
    printf("MEAN: %f\n", meanVector(&v1));

    return 0;
}
