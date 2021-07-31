#include <stdio.h>

int main(void) {

//Zeilen
for (int i = 0; i < 6; i++)
{
    //Spalten
    for (int j = 0; j < 6; j++)
    {

        if (j == 0) {
            printf("<\t");
        }else if (j == 5) {
            printf(">\n");
        }else if (i == 0){
            printf("  ^\t");
        }else if (i == 5){
            printf("  v\t");
        }else{
            printf("(%d, %d)\t", i, (j - 1));
        }
    }
}
}
