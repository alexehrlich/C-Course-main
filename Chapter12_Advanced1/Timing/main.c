#include <stdio.h>
#include <time.h>

void doSomething(){

    double value = 0.0;

    for(int i = 0; i < 10000000; i++){
        value += i;
    }
}

int main(void){

    //clock_t ist ein typedef für unsigned long
    clock_t time_start = clock();
    printf("START: %ld\n", time_start);
    doSomething();

    clock_t time_end = clock();
    printf("END: %ld\n", time_end);
    clock_t duration = time_end - time_start;

    double seconds = ((double)duration)/CLOCKS_PER_SEC;
    double ms = seconds * 1000.0;
    double mus = ms * 1000.0;
    double ns = mus * 1000.0;

    printf("S: %f\n", seconds);
    printf("MS: %f\n", ms);
    printf("MUS: %f\n", mus);
    printf("NS: %f\n", ns);

    return 0;
}
