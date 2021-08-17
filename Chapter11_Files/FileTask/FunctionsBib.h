struct Vector
{
    int* data;
    unsigned int length;
};

typedef struct Vector Vector;

void printEvenOrOdd(int number);

int getNumberFromUser();

float mean(int number_a, int number_b);

unsigned int factorial(unsigned int i);

void binom(int* a, int* b, int* c);

float meanVector(Vector *vec);

int minArray(Vector *vec);

int maxArray(Vector *vec);

Vector createVector(unsigned int length, int value);

void printVector(Vector* vec);

int** createMatrix(unsigned int rows, unsigned int cols, int value);

int** transposeMatrix(int** matrix_input, unsigned int rows, unsigned int cols);
