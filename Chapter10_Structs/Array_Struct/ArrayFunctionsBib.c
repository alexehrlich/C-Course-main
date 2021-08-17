#include <stdio.h>
#include <stdlib.h>

#include "ArrayFunctionsBib.h"

// Definition
void printEvenOrOdd(int number)
{
    if ((number % 2) == 0)
    {
        printf("Even!\n");
    }
    else
    {
        printf("Odd!\n");
    }
}

// Definition
int getNumberFromUser()
{
    int number_from_user; //0x00: 12

    printf("Pls enter a interger number!\n");
    scanf("%d", &number_from_user);

    return number_from_user; // return 12;
}

// Definition
unsigned int factorial(unsigned int i)
{
    if (i <= 1)
    {
        return 1;
    }

    return i * factorial(i-1);
}

// Definition
float mean(int number_a, int number_b)
{
    float sum = number_a + number_b;
    float mean = sum / 2.0f;

    return mean;
}

// Definiton
float meanArray(Vector *vec)
{
    float sum = 0.0f;

    for (unsigned int i = 0; i < vec -> length; i++)
    {
        sum += vec -> data[i];
    }

    float mean = sum / vec->length;
    return mean;
}

// Definiton
int minArray(Vector *vec)
{
    int min;

    for (unsigned int i = 0; i < vec -> length; i++)
    {
        if(i == 0)
        {
            min = vec -> data[i];
        }

        if (vec -> data[i] < min)
        {
            min = vec -> data[i];
        }
    }

    return min;
}

// Definiton
int maxArray(Vector *vec)
{
    int max;

    for (unsigned int i = 0; i < vec -> length; i++)
    {
        if(i == 0)
        {
            max = vec -> data[i];
        }

        if (vec -> data[i] > max)
        {
            max = vec -> data[i];
        }
    }

    return max;
}

// Definiton
Vector createVector(unsigned int length, int value)
{

    int *array = (int *)malloc(length * sizeof(int));

    Vector vec = { .data = array, .length = length };

   for (unsigned int i = 0; i < length; i++)
    {
        vec.data[i] = value;
    }

    return vec;
}

void printVector(Vector* vec){

    for(unsigned int i = 0; i < vec -> length; i++){
        printf("%d\n", vec -> data[i]);
    }
    printf("\n\n");
}

// Definiton
int** createMatrix(unsigned int rows, unsigned int cols, int value)
{
    int** matrix = (int**) malloc(rows * sizeof(int*));

    for(unsigned int i = 0; i < rows; i++)
    {
        matrix[i] = (int*) malloc(cols * sizeof(int));

        for(unsigned int j = 0; j < cols; j++)
        {
            matrix[i][j] = value;
        }
    }

    return matrix;
}

// Definition
int** transposeMatrix(int** matrix_input, unsigned int rows, unsigned int cols)
{
    int** matrix_transpose = createMatrix(cols, rows, 0);

    for (unsigned int i = 0; i < rows; i++)
    {
        for(unsigned int j = 0; j < cols; j++)
        {
            matrix_transpose[j][i] = matrix_input[i][j];
        }
    }

    return matrix_transpose;
}
