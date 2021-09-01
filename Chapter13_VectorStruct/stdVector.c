#include <stdio.h>
#include <stdlib.h>
#include "stdVector.h"

/*********************/
/*   HELPER FUNCS    */
/*********************/
Vector_t *createVector(int length, float initial_value){

    Vector_t *v1 = (Vector_t *)malloc(sizeof(Vector_t));
    float *data = (float *)malloc(length * sizeof(float));

    printf("Adresse erstellter Vector: %p\n", v1);
    printf("Adresse der Daten des erstellten Vectors: %p\n", data);


    for(int i = 0; i < v1 -> length; i++){
        v1 -> data[i] = initial_value;
    }

    v1 -> data = data;
    v1 -> length = length;

    return v1;
}

Vector_t *freeVector(Vector_t *v1){

    free(v1 -> data);
    free(v1);
    (*v1).data = NULL; //Gleichbedeutend zur normalen derefernzierung
    v1 -> data = NULL;
    v1 = NULL;
    v1 -> length = 0;

    return v1;
}

void printVector(Vector_t *v1){
    for(int i = 0; i < v1 -> length; i++){
        printf("%p\n", v1 -> data);
        printf("Index %d: %f\n", i, v1 -> data[i]);
    }
}

/*********************/
/*    I/O. FUNCS    */
/*********************/

int readInVectorData(Vector_t *vec, const char *filepath){

    FILE *fp = fopen(filepath, "r");

    if(fp == NULL){
        return 1;
    }

    for(unsigned int i = 0; i < vec -> length; i++){
        fscanf(fp, "%f", &vec -> data[i]);
    }

    fclose(fp);

    return 0;
}



int writeOutVectorData(Vector_t *vec, const char* filepath){

    FILE *fp = fopen(filepath, "w");

    if(fp == NULL){
        return 1;
    }

    for(unsigned int i = 0; i < vec -> length; i++){

        if(i < vec -> length - 1){
            fprintf(fp, "%f\n", vec -> data[i]);
        }else{
            fprintf(fp, "%f", vec -> data[i]);
        }

    }

    fclose(fp);

    return 0;
}



/*********************/
/*    MATH. FUNCS    */
/*********************/

int maxVal(Vector_t *v1){
    int maxVal = v1 -> data[0];

    for(int i = 1; i < v1 -> length; i++){
        if(v1 -> data[i] > maxVal){
           maxVal = v1 -> data[i];
        }
    }
    return maxVal;
}

int minVal(Vector_t *v1){
     int minVal = v1 -> data[0];

    for(int i = 1; i < v1 -> length; i++){
        if(v1 -> data[i] < minVal){
           minVal = v1 -> data[i];
        }
    }

    return minVal;
}

float meanVal(Vector_t *v1){

    float sum = 0.0;
    for(int i = 1; i < v1 -> length; i++){
        sum += (float)v1 -> data[i];
    }

    return sum/(float)v1 -> length;
}


Vector_t *addVectors(Vector_t *v1, Vector_t *v2){

    int max_len = v1 -> length > v2 -> length ? v1 -> length : v2 -> length;

    Vector_t *added_vec = createVector(max_len, 0);

    for(int i = 0; i < max_len; i++){

        if(i < v1->length) {
            added_vec -> data[i] += v1 -> data[i];
        }

        if(i < v2->length) {
            added_vec -> data[i] += v2 -> data[i];
        }
    }

    return added_vec;
}


Vector_t *subVectors(Vector_t *v1, Vector_t *v2){

    int min_len = v1 -> length < v2 -> length ? v1 -> length : v2 -> length;

    Vector_t *subbed_vec = createVector(min_len, 0);

    for(int i = 0; i < min_len; i++){
        subbed_vec -> data[i] = v1 -> data[i] - v2 -> data[i];
    }

    return subbed_vec;
}


int multiplyVectors(Vector_t *v1, Vector_t *v2){

    int sum = 0;

    if(v1 -> length == v2 -> length){

        for(int i = 0; i < v1 -> length; i++){

            sum += v1 -> data[i] * v1 -> data[i];
        }

    }
    return sum;
}


int scaleVector(Vector_t *v1, int scale){

     for(int i = 0; i < v1 -> length; i++){
         v1 -> data[i] *= scale;
     }

     return 0;
}


