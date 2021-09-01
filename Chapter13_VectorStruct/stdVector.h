#include <stdio.h>

/*********************/
/*      DEFINES      */
/*********************/

struct Vector
{
   int length;
   float *data;
};

typedef struct Vector Vector_t;



/*********************/
/*   HELPER FUNCS    */
/*********************/
Vector_t *createVector(int length, float initial_value);

Vector_t *freeVector(Vector_t *v1);

void printVector(Vector_t *v1);

/*********************/
/*    I/O. FUNCS    */
/*********************/

int readInVectorData(Vector_t *vec, const char *filepath);

int writeOutVectorData(Vector_t *vec, const char* filepath);


/*********************/
/*    MATH. FUNCS    */
/*********************/

int maxVal(Vector_t *v1);

int minVal(Vector_t *v1);

float meanVal(Vector_t *v1);

Vector_t *addVectors(Vector_t *v1, Vector_t *v2);

Vector_t *subVectors(Vector_t *v1, Vector_t *v2);

int multiplyVectors(Vector_t *v1, Vector_t *v2);

int scaleVector(Vector_t *v1, int scale);





