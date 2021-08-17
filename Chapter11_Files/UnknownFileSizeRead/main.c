#include <stdio.h>
#include <stdlib.h>

#include "FunctionsBib.h"


int main()
{
    char path[] = "U:/07_CODING/C-Course/C-Course-main/Chapter11_Files/UnknownFileSizeRead/InputData.txt";
    // read=r, write=w
    FILE *fp = fopen(path, "r");

    if (fp == NULL)
    {
        return 1;
    }

    // read line by line
    int line_size = 50;
    char *line = malloc(line_size * sizeof(char));


    while (fgets(line, line_size, fp) != NULL)
    {
        //int value = atoi(line);
        printf("%s", line);
    }

    // Close the file
    fclose(fp);

    return 0;
}
