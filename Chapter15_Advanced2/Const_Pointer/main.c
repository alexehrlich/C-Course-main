#include <stdio.h>




int main(){

    void function1(int * val){
        int b = 0;
        val = &b; //ERLAUBT
        *val = 8;//ERLAUBT
    }

    //Die Adresse des übergebenen Pointers darf nicht verändert werden
    //Der Wert an der Adresse darf wohl verändert werden
    void function2(const int * val){
        int b = 0;
        val = &b; //ERLAUBT
        //*val = 8;//NICHT ERLAUBT
    }

    //Die Adresse des übergebenen Pointers darf nicht verändert werden
    //Der Wert an der Adresse darf ebenfalls nicht verändert werden
    void function(const int * const val){
        int b = 0;
        //val = &b; //NICHT ERLAUBT
        //*val = 8;//NICHT ERLAUBT
    }

    return 0;
}
