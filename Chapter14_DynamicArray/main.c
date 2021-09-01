#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "DynmaicArray.h"


int main(void) {

    dynamic_array_t *arr = createDynamicArray();

    for(unsigned int i = 0; i < 20; i++){
        pushValue(arr, 0.5);
    }
    printDynamicArray(arr);

     for(unsigned int i = 0; i < 8; i++){
        popValue(arr);
    }
    printDynamicArray(arr);

    for(unsigned int i = 0; i < 7; i++){
        popValue(arr);
    }

    printDynamicArray(arr);


    return 0;
}

