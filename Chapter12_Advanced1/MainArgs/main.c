#include <stdio.h>

int main(int argc, char *args[]){

    //Das erste Argument ist immer der Name des Programms

    printf("An das Programm wurden folgende Argumente übergeben: \n");


    for(int i = 0; i < argc; i ++){
        printf("args[%d]: %s\n", i, args[i]);
    }

    return 0;
}
