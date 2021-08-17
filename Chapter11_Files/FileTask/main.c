#include <stdio.h>
#include <stdlib.h>

#include "FunctionsBib.h"


int main(void){


    //create path to file
    char read_path[] = "U:/07_CODING/C-Course/C-Course-main/Chapter11_Files/FileTask/InputData.txt";
    char write_path[] = "U:/07_CODING/C-Course/C-Course-main/Chapter11_Files/FileTask/OutputData.txt";

    //Open files
    FILE *fp_read = fopen(read_path, "r");
    FILE *fp_write = fopen(write_path, "w");

    //Check if File could be opened
    if(fp_read == NULL){ return 1;}

    //Create Vector to cache the data
    Vector v1 = createVector(8, 0);

    //write data to vector
    for(int i = 0; i < v1.length; i++){
        fscanf(fp_read, "%d", &v1.data[i]);
    }

    //Manipulate data
    for(int i = 0; i < v1.length; i++){
        v1.data[i] *= 2;
    }

    //close file
    fclose(fp_read);

    //write changes to outputfile
    for(int i = 0; i < v1.length; i++){
        if(i < v1.length - 1){
            fprintf(fp_write, "%d\n", v1.data[i]);
        }else{
            fprintf(fp_write, "%d", v1.data[i]);
        }
    }

    fclose(fp_write);
    
    return 0;
}
