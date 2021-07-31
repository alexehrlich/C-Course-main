#include <stdio.h>

int main()
{
    // Is the number div. with 3?
    unsigned int number;

    printf("Please enter a valid unsigned integer!\n");
    scanf("%u", &number);

    if (number % 3 == 0){
        printf("The number is div. by 3!");
    }else{
        printf("The number you entered is not dev. by 3! \nThe remainder is %d", (number % 3));
    }
    return 0;
}
