# Write your first C Program.
* C is a statically typed, structured, general purpose computer programming language
* C is a very powerful language developed at Bell Laboratories in 1970.
* C ia higher level language than assembly 

# Preprocessor Directives
> https://www.techonthenet.com/c_language/directives/index.php
> Preprocessor directives begin with a pound (#) symbol and may have several arguments.

# define Directive (macro definition) Syntax:
The syntax for creating a constant using #define in the C language is:
> #define CNAME value
> OR
> #define CNAME (expression)

 * #define directive allows the definition of macros within your source code. 
 * These macro definitions allow constant values to be declared for use throughout your code.




#### Compile and link source file bismillah.c into executable a.exe (Windows) or a (Unixes)
> gcc bismillah.c

#### To specify the output filename, use -o option:
> gcc bimillah.c -o Bismillah

#### You can see the detailed compilation process by enabling -v (verbose) option. For example,
> gcc bismillah.c -v -o Bismillah

#### You can use the -Dname option to define a macro, or -Dname=value to define a macro with a value. The value should be enclosed in double quotes if it contains spaces.

### Headers (.h), Static Libraries (.lib, .a) and Shared Library (.dll, .so)

#### Searching for Header Files and Libraries (-I, -L and -l)

## Resources
* https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html
* https://www.codementor.io/@a_hathon/building-and-using-dlls-in-c-d7rrd4caz
* https://www.edureka.co/blog/how-to-compile-c-program-in-command-prompt/
* https://www.techonthenet.com/c_language/file_naming.php
