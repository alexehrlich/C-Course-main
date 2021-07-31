#include "arrayFunctions.h"

int maxVal(int array[], int length){

    int max = array[0];

    for(int i = 0; i<length; i++){
        if (array[i] > max) {
            max = array[i];
        }
    }

    return max;
}



int minVal(int array[], int length){
    int min = array[0];

    for(int i = 0; i<length; i++){
        if (array[i] < min) {
            min = array[i];
        }
    }

    return min;
}


float meanVal(int array[], int length){

    float sum = 0.0f;

    for(int i = 0; i < length; i++){
        sum += (float)array[i];
    }

    return sum / (float)length;
}
