#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "DynmaicArray.h"



//FUNCTIONS
dynamic_array_t *createDynamicArray(){

    dynamic_array_t *array = (dynamic_array_t *)malloc(sizeof(dynamic_array_t));

    array -> length = 0u;
    array -> capacity = INITAL_CAPACITY;
    array -> data = (float *)malloc(INITAL_CAPACITY * sizeof(float));

    return array;
}

void expandDynamicArray(dynamic_array_t *array){

    array -> capacity += INITAL_CAPACITY;
    array -> data = (float *)realloc(array -> data, array -> capacity * sizeof(float));
}

void shrinkDynamicArray(dynamic_array_t *array){

   if(array -> capacity > INITAL_CAPACITY){
       array -> capacity -= INITAL_CAPACITY;
        array -> data = (float *)realloc(array -> data, (array -> capacity) * sizeof(float));
   }
}

float popValue(dynamic_array_t *array){

    float value = array -> data[array -> length - 1];
    array -> length--;

    if(array -> capacity / array -> length >= 2) {
        shrinkDynamicArray(array);
    }

    return value;

}

void pushValue(dynamic_array_t *array, float value){
        array -> data[array -> length] = value;
        array ->length++;

        if(array -> length == array -> capacity){
            expandDynamicArray(array);
        }
}

void clearDynamicArray(dynamic_array_t *array){

    free(array -> data);
    free(array);
    array -> data = NULL;
    array = NULL;
    array -> capacity = INITAL_CAPACITY;
    array -> length = 0u;

}

void printDynamicArray(dynamic_array_t *array){

    printf("Array contains %d elements with a capacity of %d\n", array -> length, array -> capacity);

    for(unsigned int i = 0; i < array -> length; i++){
        printf("%f\n", array -> data[i]);
    }
}
