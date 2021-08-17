#include <stdio.h>

struct Student {

    char *name;
    char *prename;
    unsigned int day;
    unsigned int month;
    unsigned int year;
};

typedef struct Student Student_t;

void printStudent(Student_t *student){

    printf("Name: %s %s; Geburtstag: %u.%u.%u\n",
        student -> prename,
        student -> name,
        student -> day,
        student -> month,
        student -> year
    );
}

//Funktion mit Pointer als Paramter, da der originale Wert verändert wird.
void changeName(Student_t *student, char *new_name){

    student -> name = new_name;

    //Alternativ
    //(*student).name = new_name;
}

int main(void){

    Student_t student1 = {.prename = "Alex", .name = "Ehrlich", .day = 10, .month = 8, .year = 1997 };

    printStudent(&student1);
    changeName(&student1, "NEWNAME");
    printStudent(&student1);

return 0;

}
