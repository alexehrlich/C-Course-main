#include <stdio.h>
#include "stdVector.h"

int main(){

    Vector_t *v1 = createVector(5, 0.0);

    for(int i = 0; i < v1 -> length; i++){
        v1 -> data[i] = (float)i;
    }


    Vector_t *v0 = createVector(5, 0.0);

    for(int i = 0; i < v1 -> length; i++){
        v0 -> data[i] = (float)i;
    }

    printVector(v0);
    printVector(v1);

    Vector_t *v2 = addVectors(v0, v1);
    printVector(v2);

    v2 = v1;

    scaleVector(v2, 4);

    printVector(v2);


    writeOutVectorData(v2, "test.txt");

    Vector_t *v2_copy = createVector(5, 0.0);
    readInVectorData(v2_copy, "test.txt");

    printf("V2-COPY:\n");
    printVector(v2_copy);

    return 0;
}
