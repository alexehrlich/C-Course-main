#include <stdio.h>
#include <stdlib.h>


//returns a pointer to start adress of the allocated memory area on the heap
//length: number of values of the array
//default_value: sets the value of each array element to this value

int *createArrayOnHeap(unsigned int length, int default_value){

    //malloc reserves some memory on heap
    int *array_pointer = malloc(length * sizeof(int));
     printf("CREATE MEMORY SPACE ON HEAP AR: %p.\n", array_pointer);
    for(int i = 0; i < length; i++){
        array_pointer[i] = default_value;
        printf("%d", array_pointer[i]);
    }
    printf("\n\n");
    return array_pointer;
}


//Array Pointer an eine Funktion übergeben
void init_time_array(int *array_ptr, unsigned int length){

    printf("INIT TIME ARRAY AT: %p.\n", array_ptr);
    for(int i = 0; i < length; i++){
        array_ptr[i] = i;
        printf("%d", array_ptr[i]);
    }

     printf("\n\n");
}

void compute_time_array(int *array_ptr, unsigned int length){

    printf("COMPUTE TIME ARRAY AT: %p.\n", array_ptr);
    for(int i = 0; i < length; i++) {

        int tempSum = 0;

        for(int j = 0; j < i; j++){
            tempSum += array_ptr[j];
            //printf("%d", temp);
        }

        array_ptr[i] += tempSum;
    }

    printf("\n\n");
}

//In C kann man keine Arrays returnen sonder nur Zeiger, die dann wie Arrayys zu verwenden sind. int[] reutrnMEanArray() ist in C nicht möglich!

int main(void){
//WICHTIG: int *array_pointer und int* array_on_heap_pointr sind zwei verschieden Pointer variablen auf dem Stack die beide den gleichen wert, nämliche eine Adresse enthalten, die auf den
//reservierten HEAP-Startspeicher bereich zeigt.
    int* array_on_heap_pointer = createArrayOnHeap(5, 0);

    init_time_array(array_on_heap_pointer, 5);
    compute_time_array(array_on_heap_pointer, 5);

    //print the array
    for(int i = 0; i < 5; i++){
        printf("%d\n", array_on_heap_pointer[i]);
    }

    //Hier free() und array_on_on_heap_pointr nutzlos, da main funtkion eh am Ende und dort der ganze Speicher freigegebn wird
    free(array_on_heap_pointer);
    array_on_heap_pointer = NULL; //Dass er nicht mehr auf die Alte Speicheradressse zeigt!
    return 0;
}
