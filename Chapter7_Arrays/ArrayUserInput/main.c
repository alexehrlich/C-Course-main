#include <stdio.h>
#include "arrayFunctions.h"

int main(void){

    int userInputArray[1000];
    int i = 0;
    int userInput;

    printf("Gebe solange Zahlen ein von denen du das MIN und MAX berechenn möchtest. Wenn du die Eingabe beenden möchtest gebe eine Zahl <= 0 ein.\n");

    while (i<1000){
        scanf("%d", &userInput);
        if (userInput > 0) {
            userInputArray[i] = userInput;
            i++;
        }else{
            break;
        }
    }

    printf("MIN: %d\n", minVal(userInputArray, i));
    printf("MAX: %d\n", maxVal(userInputArray, i));
    printf("MEAN: %f\n", meanVal(userInputArray, i));

    return 0;
}
