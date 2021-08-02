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

//char *strncat(s,ct,n)	höchstens n Zeichen von ct hinten an die Zeichenkette s anfügen und s mit '\0' abschließen; liefert s.

    char s1[] = "Hi ";
    char s2[] = "Alex";
    char s3[] = "!";

    char n_combined[20] = "";

    strcat(n_combined, s1);
    strncat(n_combined, s2, 2);
    strcat(n_combined, s3);

    printf("%s", n_combined);
    printf("\n\n");

//int strcmp(cs,ct)	Zeichenketten cs und ct vergleichen; liefert <0 wenn cs<ct, 0 wenn cs==ct,oder >0, wenn cs>ct.
    char name1[] = "Alex Ehrlich";
    char name2[] = "Sophie Ehrlich";

    if(strcmp(name1, name2) == 0){
        printf("Die Namen sind gleich.");
    }else{
        printf("Unterschied Buchstabe: %d", strcmp(name1, name2));
    }

     printf("\n\n");

//int strncmp(cs,ct,n)	höchstens n Zeichen von cs mit der Zeichenkette ct vergleichen; liefert <0 wenn cs<ct, 0 wenn cs==ct, oder >0 wenn cs>ct.

    char name4[] = "Alex Ehrlich";
    char name5[] = "Alex Lustig";

    if(strncmp(name4, name5, 4) == 0){
        printf("Die Namen sind gleich.");
    }else{
        printf("Unterschied Buchstabe: %d", strncmp(name4, name5, 4));
    }
    printf("\n\n");

//char *strchr(cs,c)	liefert Zeiger auf das erste c in cs oder NULL, falls nicht vorhanden. Bekommt eigentlich Int aber mab kann auch char übergeben, da nach ASCII ein INT draus geamcht wird

    char *ptr_name4 = name4;
    char *ptr_Char_name4_h = strchr(name4, 'h');

    printf("Der String name4 beginnt an der Adresse: %p\n", ptr_name4);
    printf("Der Buchstabe 'h' wurde als erstes an folgender Adresse gefunden: %p\n", ptr_Char_name4_h);
    printf("\n\n");

//char *strrchr(cs,c)	liefert Zeiger auf das letzte c in cs, oder NULL, falls nicht vorhanden,
    char *ptr_name = name4;
    char *ptr_Char_name_h = strrchr(name4, 'h');

    printf("Der String name4 beginnt an der Adresse: %p\n", ptr_name);
    printf("Der Buchstabe 'h' wurde als letztes an folgender Adresse gefunden: %p\n", ptr_Char_name_h);
    printf("\n\n");

//size_t strlen(cs)	liefert Länge von cs (ohne '\0').

    printf("Die Länge des Namen Alex Ehrlich mit LEER und ohne Nulltemrinator beträgt: %d", strlen(name4));
    printf("\n\n");






    return 0;
}
