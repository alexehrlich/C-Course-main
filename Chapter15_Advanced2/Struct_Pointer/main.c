#include <stdio.h>

typedef struct user{
    char *name;
}user_t;


typedef struct account{
    user_t *user;
    unsigned int id;
}account_t;


int main(){

    //Create user

    user_t alex = {.name = "Alexander Ehrlich"};

    account_t alex_acc = { .id = 12344, .user = &alex};

    //Acess
    printf("Name: %s\n", alex_acc.user -> name);
    printf("ID: %d\n", alex_acc.id);
    return 0;
}
