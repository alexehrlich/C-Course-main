#include <stdio.h>

int printOddOrEven(int number){

    if (number % 2 == 0){
        printf("even!\n");
    }else{
        printf("odd!\n");
    }
}


int main(){

    printOddOrEven(4);
}
