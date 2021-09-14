#include <stdio.h>
#include <stdlib.h>

#include "Record.h"

/* FUNCTION DECLARATION */

/* Allocates Heap memory for n entries */
entry_t *create_entries(unsigned int n){
    return (entry_t *)malloc(n * sizeof(entry_t));
}

/* Allocates Heap memory for one record sructure*/
record_t *create_record(){
    return (record_t *)malloc(sizeof(record_t));
}

/* Sets given entries and length to a record*/
void fill_record(record_t * record, const entry_t * const entries, const unsigned int length){

    if(record == NULL){
        fprintf(stderr, "record or entry has value NULL.");
        return;
    }

    record -> entries = entries;
    record -> length = length;

}

/*Deletes and frees a record and its entries*/
void delete_record(record_t *record){

    free(record);
    free(record -> entries);

    record = NULL;
    record -> entries = NULL;
}

/* Prints the record to the console */
void print_record(const record_t * const record){
    if(record == NULL){
        fprintf(stderr, "record has value NULL.");
        return;
    }

    for(unsigned int i = 0; i < record ->length; i++){
        printf("%c,%d\n", record -> entries[i].letter, record -> entries[i].number);
    }

    printf("\n\n");
}
