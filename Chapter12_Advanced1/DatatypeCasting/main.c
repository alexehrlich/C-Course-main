#include <stdio.h>

int main(void){

    double d = 1337.7;
    int i = d; //Nachkommastelle wird einfach abgeschnitten

    int i2 = 65;
    char c = i2;
    int i3 = c;

    double result = d / (double)i3;


    printf("%d\n", i);
    printf("%d\n", d); //Wird nicht gecastet, sondern die Bitfolge des Doub le wird als Int interpretiert --> Komsiches ergebnis

    printf("%c\n", c);
    printf("%d\n", c);
    printf("%lf\n", result);
    
    return 0;
}
