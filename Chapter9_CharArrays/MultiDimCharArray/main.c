#include <stdio.h>
#include <stdlib.h>

#define max_name_length 20
#define number_of_names 4

int main(void){

    //create a 2D-char pointer array. Dieser Pointer liegt auf dem Stack:
    int **ptr_char_matrix = (char **)malloc(number_of_names * sizeof(char *));

    //Speicher für jedes Char-array allokieren. Der Pointer (Stack) zeigt auf 3 Speicherbereiche auf dem Heap, wovon jeder 20yte hat (20 chars * 1Byte/char):
    for(int i = 0; i < number_of_names; i++){
        ptr_char_matrix[i] = (char *)malloc(max_name_length * sizeof(char));
    }

    ptr_char_matrix[1] = "Alex Ehrlich";
    ptr_char_matrix[2] = "Sophie Schlau";
    ptr_char_matrix[3] = "Sascha Liehm";

for(int i = 0; i < number_of_names; i++){
       printf("%s\n", ptr_char_matrix[i]);
    }

    return 0;
}
