#include <stdio.h>
#include <stdlib.h>


int main() {

    int userInput = 0;
    int goal = 13;
    int trys = 5;
    int i = 0;
    int success = 0;

    printf("Gebe eine Zahl zwischen 0 und 100 ein!\n");
    scanf("%d", &userInput);

    while (i < trys){

        i++;
        if (userInput != goal) {
            printf("Leider falsch du hast noch %d Versuche.\n", (trys - i));
            printf("Versuche es noch einmal\n");
            scanf("%d", &userInput);
        } else{
            success = 1;
            break;
        }
    }

    if (success == 0) {
        printf("Leider verloren.");
    }else{
        printf("Glückwunsch - du hast die Zahl erraten.");
    }


}
