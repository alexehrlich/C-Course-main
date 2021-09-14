/* INCLUDE GURADS */
#ifndef RECORD_H
#define RECORD_H

/* TYPE DEFINITION */
typedef struct entry{

    char letter;    //1 Byte
    int number;     //4 Byte --> entry_t 8 Byte groß

}entry_t;


typedef struct record{

    entry_t *entries;
    unsigned int length;

}record_t;


/* FUNCTION DEFINITION */


/* Allocates Heap memory for n entries */
entry_t *create_entries(unsigned int n);

/* Allocates Heap memory for one record sructure*/
record_t *create_record();

/* Sets given entries and length to a record*/
void fill_record(record_t * record, const entry_t * const entries, const unsigned int length);

/*Deletes and frees a record and its entries*/
void delete_record(record_t *record);

/* Prints the record to the console */
void print_record(const record_t * const record);


#endif /* RECORD_H */
