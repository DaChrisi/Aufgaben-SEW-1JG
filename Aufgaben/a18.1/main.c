#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#include <conioex.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int i=0;
    long zahl=0;
    char *eptr=0;

    for(i=0;i<argc;i++)
    {
        printf("argv[%d]: %s\n",i,argv[i]);
        zahl=strtol(argv[i],&eptr,10);
        if(*eptr=='\0')
        {
            printf("Zahl: %ld\n",zahl);
        }
    }
    
    return EXIT_SUCCESS;
}
