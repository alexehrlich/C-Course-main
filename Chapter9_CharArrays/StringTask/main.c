#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){

    char prename[20];
    char name[20];
    int year;
    int month;
    int day;

    printf("Gebe deinen Vornamen ein: ");
    scanf("%20s", prename);

    printf("Gebe deinen Nachnamen ein: ");
    scanf("%20s", name);

    printf("Gebe deinen Geburtstag (YYYYMMDD) ein: ");
    scanf("%4d %2d %2d", &year, &month, &day);

    printf("Name: %s %s, Geburtstag: %d%d%d\n", prename, name, day, month, year);

    return 0;
}