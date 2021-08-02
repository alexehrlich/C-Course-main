#include <stdio.h>
#include <string.h>

int main(void){

    char string1[] = "Hallo Welt!";
    char string2[] = "Servus Welt!";
    char string3[] = "Hallo";
    char string4[] = "Erdling";

//char *strcpy(s,ct)	Zeichenkette ct in Vektor s kopieren, inklusive '\0'; liefert s.
    char copied_string[15];
    char *ptr_copied_string = strcpy(copied_string, string1);

    //Liefert die Adresse der Kopierdest zurück
    printf("String %s an Adresse: %p oder auch %p", copied_string, ptr_copied_string, copied_string);
    printf("\n\n");
//char *strncpy(s,ct,n)	höchstens n Zeichen aus ct in s kopieren; liefert s. Mit '\0' auffüllen, wenn ct weniger als n Zeichen hat.
    char copied_n_string[15];
    char *ptr_copied_n_string = strncpy(copied_n_string, string2, 5);
    //copied_n_string[5] = '\0';

    //Liefert die Adresse der Kopierdest zurück
    printf("5 Zeichen aus String 2 in String %s an Adresse: %p ", copied_n_string, ptr_copied_n_string);
    printf("\n\n");


//char *strcat(s,ct)	Zeichenkette ct hinten an die Zeichenkette s anfügen; liefert s.
    char combined[15] = "";
    strcat(combined, string3);
    strcat(combined, string4);
    printf("%s", combined);
    printf("\n\n");
















    return 0;
}
