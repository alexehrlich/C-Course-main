#include <stdio.h>
#include <stdlib.h>

#include "FunctionsBib.h"

int main(){

    char path[] = "U:/07_CODING/C-Course/C-Course-main/Chapter11_Files/FileRead/test.txt";

    FILE *fp = fopen(path, "r");

    if (fp == NULL){

        return 1;
    }

    Vector v1 = createVector(5, 0);

    for(int i = 0; i < v1.length; i++){
        fscanf(fp, "%d", &v1.data[i]);
    }

    fclose(fp);

    for(int i = 0; i < v1.length; i++){
       printf("%d\n", v1.data[i]);
    }

    return 0;
}
