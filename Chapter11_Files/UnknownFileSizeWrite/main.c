#include <stdio.h>
#include <stdlib.h>

#include "FunctionsBib.h"

int main(void){

    Vector v1 = createVector(5, 0);


    char path[] = "U:/07_CODING/C-Course/C-Course-main/Chapter11_Files/UnknownFileSizeWrite/out.txt";
    FILE *fp = fopen(path, "w");



    for(int i = 0; i < v1.length; i++){

        char temp[20];

        sprintf(temp, "%d\n", v1.data[i]);
        fputs(temp, fp);
    }

    fclose(fp);
    freeVector(v1);

    fp = NULL;

    return 0;
}
