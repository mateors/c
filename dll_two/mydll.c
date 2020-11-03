#include <stdio.h>
#include "mydll_header.h"

__declspec(dllexport) void Hello()
{
    printf ("Hello Assalamualikum, My very first DLL :-)\n");
}