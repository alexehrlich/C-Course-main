#include <stdio.h>


/*
Der Compiler optimiert den von Strukturen verwendeten Speicher nach 2 Regeln:
- Die Strukturspeichergröße muss durch die Größe der größten Einzelvariable teilbar sein;
- Die Einzelvariablen können nur an Speichergrößen beginnen, durch die Sie teilbar sind.

--> Das bedeutet, dass die Zwischenräume mit sog. Padding-Variablen auf gefüllt werden. Dem kann mit einer Sortierung der
Strukturvariablen entgegengewirkt werden. Groß -> Klein
*/

struct {
    char a; //Größe 1 Byte --> Kann an Byte 1. beginnen. Byte 0
    int b; //Größe 4 Byte --> Kann erst am Byte 4 beginnen --> Byte 1, 2, 3 sind Padding Bytes. Byte 4-7
    float c; //Größe 4Byte --> Kann erst am Byte 8 beginnen --> Keine Padding Bytes. Bytes 8 - 11
}s_data1; //Theoretisch 9 Byte --> Mit Padding 12Byte

//Andere Sortierung
struct {
    int b; //Größe 4 Byte --> Byte 0 - 3
    float c; //Größe 4Byte --> Kann erst am Byte 4 beginnen --> Byte 4 - 7
    char a; //Größe 1 Byte --> Kann überalle beginnen --> Byte 8
}s_data2; //Theoretisch 9 Byte --> Kein Padding nötig, aber 12 Byte da 9Byte nicht durch 4 teilbar ist.


int main(){

    printf("The real size of s_data1 is: %d Byte\n", sizeof(s_data1));
    printf("The real size of s_data2 is: %d Byte\n", sizeof(s_data2));

    return 0;
}
