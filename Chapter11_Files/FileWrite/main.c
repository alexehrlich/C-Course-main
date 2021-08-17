#include <stdio.h>
#include <stdlib.h>

#include "FunctionsBib.h"

int main(){


   Vector v1 = createVector(5, 0);

    for(int i = 0; i < v1.length; i++){
        v1.data[i] = i * i;
    }

    char path[] = "U:/07_CODING/C-Course/C-Course-main/Chapter11_Files/FileWrite/Output.txt";

    FILE *fp = fopen(path, "w");

    if (fp == NULL){
        return 1;
    }


    for(int i = 0; i < v1.length; i++){


        if(i < v1.length -1){
            fprintf(fp, "%d\n", v1.data[i]);
        }else{
           fprintf(fp, "%d", v1.data[i]);
        }
    }

    fclose(fp);

    return 0;
}
