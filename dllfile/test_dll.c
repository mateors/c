#include <stdio.h>
#include "test_dll.h"

EXPORT void message(){
    printf("Hello World");
}

//gcc -shared -o TestDll.dll -Wl,--out-implib,libtstdll.a test_dll.o