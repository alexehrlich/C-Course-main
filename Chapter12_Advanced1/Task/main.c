#include <stdio.h>
#include <stdlib.h>

int compare(const void *element1, const void *element2){

    int left = *((int *)element1);
    int right = *((int *)element2);

    if(left > right) return 1;
    if(left < right) return -1;
    else return 0;
}

int main(int argc, char *argv[]){


    if(argc == 1){
        printf("You have to enter the filepath and the length\n");
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");
    if(fp == NULL){
        printf("File does not exist.\n");
        return 1;
    }

    int file_length = atoi(argv[2]);
    int *chache = (int *)malloc(file_length * sizeof(int));

    chache[0] = 5;
    //Read data from file

    printf("Reading data from file...\n");
    for(int i = 0; i < file_length; i++){
        fscanf(fp, "%d", &chache[i]);
        printf("%d\n", chache[i]);
    }

    fclose(fp);
    fp = fopen(argv[1], "w");

    qsort(chache, file_length, sizeof(int), compare);

    for(int i = 0; i < file_length; i++){

        fprintf(fp, "%d\n", chache[i]);
    }


    return 0;
}
