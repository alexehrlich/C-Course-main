/* INCLUDE GUARDS */
#ifndef CSVREADER_H
#define CSVREADER_H

#include <stdio.h>
#include "Result.h"
#include "Record.h"


/* TYPE DEFINITION AND DEFINES */
#define NUM_VAL 2
#define FILE_LEN 64
#define FOLDER_LEN 128
#define BUFFER_SIZE 64

typedef enum{

    ASCENDING = 0,
    DESCENDING = 1

}SORTING_SCHEME;


/* FUNCTION DEFINITION*/

/*
    Gets a filepath and counts the lines of the file.
    Returns FAILURE if file couldnt be opened.
    passes result via const ptr num_lines_output.
*/
RESULT_T line_count(const char *filepath, unsigned int * const num_lines_output);

/*
    Reads entries from given file and stores it in record.
    Return FAILURE if file not found.
*/
RESULT_T read_csv_into_record(const char * const filepath, record_t * const record);


/*
    Writes entries from given record into file.
    Return FAILURE if record is nil.
*/
RESULT_T write_csv_from_record(const record_t * const record, const char * filepath);


/*
    Creates random record entry for every existing entry
    Return FAILURE if record is nil.
*/
RESULT_T fill_record_random(record_t * const record);



/*
    Creates random record entry for every existing entry
    Return FAILURE if record is nil.
*/
RESULT_T sort_record(record_t * const record, const SORTING_SCHEME sorting_scheme);




#endif /* CSVREADER_H */
