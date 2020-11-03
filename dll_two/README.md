
# How to create DLL in C
 * Create a header (mydll_header.h) file define your function.
 * Create a s source (mydll.c) file and Implement your function.
 * Execute the following command one by another.


> gcc -c mydll.c 
> this will generate **mydll.o** object file

> gcc -shared -o MyLib.dll -Wl,--out-implib,libtstdll.a mydll.o 
> this will create two files **MyLib.dll** and **libtstdll.a**


# Resources
* https://www.codementor.io/@a_hathon/building-and-using-dlls-in-c-d7rrd4caz
* https://medium.com/@markkevinbaltazar/how-to-compile-link-and-build-a-c-program-using-gcc-578071c79a76