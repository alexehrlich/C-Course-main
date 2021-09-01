#include <stdio.h>
#include <time.h>


void doSomething(){

    double value = 0.0;

    for(int i = 0; i < 100000000000; i++){
        value += i;
    }
}


int main(){

    time_t time_start = time(NULL);

    doSomething();

    time_t time_end = time(NULL);

    time_t duration = time_end - time_start;


    printf("SEC: %ld", duration);

    return 0;
}
