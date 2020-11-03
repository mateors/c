#include <stdio.h>

#define AGE 30
#undef AGE

int main(){

   #ifdef AGE
   printf("Mostain you are %d years old.\n", AGE);
   #endif

   #warning this is a warning
   printf("Assalamualikum brother how are you?\n");  

} 