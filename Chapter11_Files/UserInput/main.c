#include <stdio.h>
#include <stdlib.h>

#include "FunctionsBib.h"


int main(void){

    char temp[20];
    int rows = 0;

    char path[] = "U:/07_CODING/C-Course/C-Course-main/Chapter11_Files/UserInput/out.txt";


    while(rows < 10){
        rows++;
        FILE *fp = fopen(path, "a");
        fgets(temp, 20, stdin);
    	fputs(temp, fp);
        fclose(fp);

    }

 return 0;

}
