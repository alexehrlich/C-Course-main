#include <stdio.h>
#include <stdlib.h>


//In C gibt es an sich keine Strings. Strings sind char Arrays mit einem \0 (Nullterminierung) am ende, welches nicht geprintet wird
int main(void){

    //Stack
    char name[5] = {'A', 'l', 'e', 'x', '\0'};

    for(int i = 0; i < 5; i++){
        printf("%c\n", name[i]);
    }


    //Es gibt aber die Kurzform mit " " - Achtung trotzdem \0 das letzte Zeichen
    char name2[] = "Alexander";

    printf("%s\n", name2);

    for(int i = 0; i < 9; i++){
        printf("%c ", name2[i]);
    }

}
