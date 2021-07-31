#include <stdio.h>
#include "calculatorfunctionslib.h"

int main(void){


    while(1){

        int number1 = 0;
        int number2 = 0;

        char operand = '+';

        printf("Gebe eine erste Zahl ein\n");
        scanf("%d",&number1);

        printf("Gebe eine Operation ein.\n");
        scanf("%d",&number1);

        printf("Gebe eine zweite Zahl ein\n");
        scanf("%d",&number2);

        switch (operand){

            case 43:
                printf("Das Ergebnis lautet: %d\n", addition(number1, number2));
                break;
            case 45:
                printf("Das Ergebnis lautet: %d\n", subtract(number1, number2));
                break;
            default:
                printf("Ungültigen Operanden eingegeben.\n");
        }

    }
    return 0;
}
