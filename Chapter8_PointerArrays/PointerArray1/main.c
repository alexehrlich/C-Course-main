#include <stdio.h>
#include <stdlib.h>

int main(void){

    int array_size;

    printf("Gebe eine Array-Größe ein.\n");
    scanf("%d", &array_size);

    //Pointer Variable, die selbst auf dem Stack liegt, aber auf die Startadresse des auf dem HEap reservierten
    //Speicherbereichs zeigt. //Muss gecastet werden, da die malloc-funktio einen void-Poiunter zurückgibt:
    //array_size wird vom Nutzer eingegegben
    int *array_pointer = (int *)malloc(array_size * sizeof(int));

    //initalisieren des Arrays auf dem HEAP:
    for(int i = 0; i < array_size; i++){
        array_pointer[i] = 0;
    }

    //Ausgabe des initialisierten arrays:
    for(int i = 0; i < array_size; i++){
        printf("%d\n", array_pointer[i]);
    }

    //Der Name eines Arrays ist die Adresse (Pointer) des Starts des Speicherbereichs
    //Ikrementierung Pointer
    int my_array[5] = {1, 2, 3, 4, 5};
    int *p1_startadress = my_array;
    int *p2 = (p1_startadress + 1);
    int *p3 = (p2 + 1); //Zählt die Adresse um 1 einheit (hier 4Byte hoch)
    int *p4 = (p2 + 2);
    int *p5 = (p2 + 3);

    //Testweise Erstellung eines Arrays, das Zeiger beinhaltet
    int* pointer_array[5] = {p1_startadress, p2, p3, p4, p5};

    //Dereferenzierung des Pointers an dieser Stelle
    int some_int = *(pointer_array[0]);

    printf("TEST Derefernzierung *(pointer_array[0]) %d\n", some_int);

    //Ausgeben der Werte mit Dereferenzierung
    for(int i = 0; i < 5; i++){
        printf("Pointer %d: %p\n", (i+1), pointer_array[i]);
        printf("Pointerwert: %d\n", (i+1), *(pointer_array[i]));
    }

    //Der Speicher muss nach dem Gebrauch wieder freigegenb werden!
    free(array_pointer);
    array_pointer = NULL;

    return 0;
}
