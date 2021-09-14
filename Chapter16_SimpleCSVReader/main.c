#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "CSVReader.h"

int main(void){

    char PROJECT_PATH[] = "U:/07_CODING/C-Course/C-Course-main/Chapter16_SimpleCSVReader/";
    char complete_filepath [FOLDER_LEN + FILE_LEN] = { '\0'};

    strncpy(complete_filepath, PROJECT_PATH, FOLDER_LEN);
    strncat(complete_filepath, "data_in.csv", FILE_LEN);

    record_t * record = create_record();

    read_csv_into_record(complete_filepath, record);

    print_record(record);

    fill_record_random(record);

    write_csv_from_record(record, "U:/07_CODING/C-Course/C-Course-main/Chapter16_SimpleCSVReader/out.csv");

    sort_record(record, ASCENDING);

    print_record(record);

    sort_record(record, DESCENDING);

    print_record(record);

    return 0;
}
