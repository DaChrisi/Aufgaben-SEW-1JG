#include <stdio.h>
#include <stdlib.h>

//Quellcode -> Pr�prozessor -> Compiler -> Linker -> .exe
int main()
{
    char zeichen='A';
    int zahl=123;
    double avg=2.1;
    char wort[]="Softwareentwickelung";
    //Datentypen:
    //Zeichen: char (1 Byte)
    //ganze Zahlen: char, short(2), long(4)
    //Gleitkomma Zahlen: float(4), double(8) ,double long(16)
    //printf("float: %d (Byte) \n", sizeof(long double));
    printf("Zahl: %-6dkm\n",zahl);
    printf("Avg: %.2f\n",avg);
    printf("Avg: %E5.2lf\n", avg);
    printf("Char: %c\n",zeichen);
    printf("Wort: %s\n",wort);
    printf("<%c%5c>",'A','B');
    return EXIT_SUCCESS;
}
