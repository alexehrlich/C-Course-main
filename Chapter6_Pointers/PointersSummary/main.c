#include <stdio.h>

void addByValue(int number){
    return ++number;
}


void addByRef(int *number_pointer){

    printf("Der Wert an der Stelle vom Wert(Adresse) von number_ref_pointer: %d\n", *number_pointer);
    printf("Der Wert der lokal erstellten Pointer-Variable: %p\n", number_pointer);
    printf("Die Adresse der lokal erstellten Pointer-Variable: %p\n", &number_pointer);

    return ++(*number_pointer);
}



int main(void){

    int number_val = 5;
    int number_ref = 10;

    int *number_ref_pointer = &number_ref;

    printf("Deklaration + Definition:\n\n");
    printf("Der Wert von number_val: %d\n", number_val);
    printf("Die Adresse von number_val: %p\n\n", &number_val);
    printf("Der Wert von number_ref: %d\n", number_ref);
    printf("Die Adresse von number_ref: %p\n\n", &number_ref);
    printf("Der Wert an der Stelle vom Wert(Adresse) von number_ref_pointer: %d\n", *number_ref_pointer);
    printf("Der Wert von number_ref_pointer: %p\n", number_ref_pointer);
    printf("Die Adresse von number_ref_pointer: %p\n\n", &number_ref_pointer);
    printf("TEST: Der Wert von *(&number_ref_pointer): %p\n", *(&number_ref_pointer));
    printf("TEST: Der Wert von &(*number_ref_pointer): %p\n", *(&number_ref_pointer));

    addByValue(number_val);
    addByRef(number_ref_pointer);

    printf("Funktionsaufrufe:\n\n");
    printf("Der Wert von number_val: %d\n", number_val);
    printf("Die Adresse von number_val: %p\n\n", &number_val);
    printf("Der Wert von number_ref: %d\n", number_ref);
    printf("Die Adresse von number_ref: %p\n\n", &number_ref);
    printf("Der Wert an der Stelle vom Wert(Adresse) von number_ref_pointer: %d\n", *number_ref_pointer);
    printf("Der Wert von number_ref_pointer: %p\n", number_ref_pointer);
    printf("Die Adresse von number_ref_pointer: %p\n\n", &number_ref_pointer);



    return 0;
}
