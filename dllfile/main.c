#include "test_dll.h"

int main(){

    message();
    return 0;
}

//https://www.codementor.io/@a_hathon/building-and-using-dlls-in-c-d7rrd4caz
//gcc -o testProg main.c -L. -lTestDll