#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

#define INITAL_CAPACITY 10

//TYPEDEF
typedef struct dynamic_array{
    float *data;
    unsigned int length;
    unsigned int capacity;
}dynamic_array_t;


//FUNCTIONS
dynamic_array_t *createDynamicArray();

void expandDynamicArray(dynamic_array_t *array);
void shrinkDynamicArray(dynamic_array_t *array);

float popValue(dynamic_array_t *array);
void pushValue(dynamic_array_t *array, float value);

void clearDynamicArray(dynamic_array_t *array);
void printDynamicArray(dynamic_array_t *array);

#endif
