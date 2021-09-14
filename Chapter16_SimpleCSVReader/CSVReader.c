#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "CSVReader.h"


RESULT_T line_count(const char *filepath, unsigned int * const num_lines_output){

    FILE *fp = fopen(filepath, "r");

    if(fp == NULL){
        printf("File not found.\n");
        return FAILURE;
    }else{
        printf("File opened successfully.\n");
    }

    unsigned int count = 0;
    char temp[64];

    while(fgets(temp, sizeof(temp), fp) != NULL){
        count ++;
    }

    *num_lines_output = count;

    return SUCCESS;
}


RESULT_T read_csv_into_record(const char * const filepath, record_t * const record){

    FILE *fp = fopen(filepath, "r");

    if(fp == NULL){
        return FAILURE;
    }

    if(record == NULL){
        return FAILURE;
    }



    unsigned int num_lines = 0;

    RESULT_T return_code = line_count(filepath, &num_lines);

    if(return_code == FAILURE){
        return return_code; //Call Stack
    }

    entry_t * entries = create_entries(num_lines);

    if(entries == NULL) {
        return FAILURE;
    }

    for(unsigned int i = 0; i < num_lines; i++){

        char buffer[BUFFER_SIZE] = { '\0' };

        //reads the current line into a buffer (for sscanf)
        fgets(buffer, BUFFER_SIZE, fp);

        //sscanf reads from buffer and return the amount of scanned arguments
        int scanned_arguments = sscanf(buffer, "%c,%d", &entries[i].letter, &entries[i].number);

        if(scanned_arguments != NUM_VAL){
            num_lines = i;
            break;
        }
    }

    fill_record(record, entries, num_lines);

    int return_close = fclose(fp);
    fp = NULL;

    if(return_close == -1){
        return FAILURE;
    }


    return SUCCESS;
}


RESULT_T write_csv_from_record(const record_t * const record, const char * filepath){

     if(record == NULL){
        fprintf(stderr, "record or entry has value NULL.");
        return FAILURE;
    }

    FILE *fp = fopen(filepath, "w");

    if(fp == NULL){
        printf("Error with opening or creating file\n");
        return FAILURE;
    }

    for(unsigned int i = 0; i < record -> length; i++){
       fprintf(fp, "%c,%d\n", record->entries[i].letter, record->entries[i].number);
    }

    fclose(fp);

    return SUCCESS;
}


RESULT_T fill_record_random(record_t * const record){

    if(record == NULL){
        return FAILURE;
    }

    //initialisiert den Pseudozufallsgenerator
    srand(time(NULL));

    char upper_letter = 122; //'z'
    char lower_letter = 97; //'a'
    char upper_number = 99;
    char lower_number = 0;

    for(unsigned int i = 0; i < record -> length; i++){

        //Map the big rand number to desired range
        char random_letter = rand() % (upper_letter - lower_letter) + lower_letter;
        char randoem_number = rand() % (upper_number - lower_number);

        record -> entries[i].letter = random_letter;
        record -> entries[i].number = randoem_number;
    }

    return SUCCESS;
}


//SORTING
static int compare_ascending(const entry_t * const lhs, const entry_t * const rhs){

    if(lhs->number == rhs->number){ return 0; }

    if(lhs->number > rhs->number) { return 1; }

    if(lhs->number < rhs->number) { return -1; }

    return 0;
}

static int compare_descending(const entry_t * const lhs, const entry_t * const rhs){

    if(lhs->number == rhs->number){ return 0; }

    if(lhs->number < rhs->number) { return 1; }

    if(lhs->number > rhs->number) { return -1; }

    return 0;
}

RESULT_T sort_record(record_t * const record, const SORTING_SCHEME sorting_scheme){

    if(record == NULL){
        return FAILURE;
    }

    switch(sorting_scheme){

        case ASCENDING:
            qsort(record ->entries, record  -> length, sizeof(entry_t), &compare_ascending);
            break;
        case DESCENDING:
            qsort(record ->entries, record  -> length, sizeof(entry_t), &compare_descending);
            break;
        default: printf("Something went wrong.\n");
    }

    return SUCCESS;
}




