#include <stdio.h>
#include "arrayFunctions.h"

#define ARR_LENGTH 5


int main(void){

    int testArray[5] = {233, 45, 67, 888, 456};

    printf("MIN: %d\n", minVal(testArray, ARR_LENGTH));
    printf("MAX: %d\n", maxVal(testArray, ARR_LENGTH));
    printf("MEAN: %f\n", meanVal(testArray, ARR_LENGTH));

    return 0;
}
