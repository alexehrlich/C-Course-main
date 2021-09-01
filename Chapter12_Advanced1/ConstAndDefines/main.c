#include <stdio.h>

//Dfines: Wird vom Präprozessor beim Compilen ersetzt:
#define PI_DEF 3.1415 //scon zur Compiletime bekannt!!
#define LEN_DEF 5

//globale Variable:
const int PI = 3.1415; //Erst zur Runtime bekannt!!!
const int LEN = 5;



int main(void){

    	//PI += 2; --> Nicht möglich

    return 0;
}
