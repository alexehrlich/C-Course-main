#include <stdio.h>

int main(){

int numberOne = 0;
int numberTwo = 0;

printf("Gebe eine ganze Zahl ein!");
scanf("%d", &numberOne);
printf("Gebe nochmal eine ganze Zahl ein!");
scanf("%d", &numberTwo);


printf("Die Summe der beiden Zaheln ist %d\n", (numberOne + numberTwo));
printf("Die Differenz der beiden Zaheln ist %d\n", (numberOne - numberTwo));
printf("Der Divisionsrest der beiden Zaheln ist %d\n", (numberOne % numberTwo));
printf("Der Quotient der beiden Zaheln ist %f\n", ((float) numberOne / (float)numberTwo));

return 0;
}
