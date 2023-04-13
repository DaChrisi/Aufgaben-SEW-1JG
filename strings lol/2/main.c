#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#include <conioex.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char hilfstring[101]="";
    long zahl=0;
    char *eptr=NULL;

    printf("Ganze Zahl: ");
    gets(hilfstring);
    zahl=strtol(hilfstring, &eptr, 10);
    if(*eptr!='\0'||eptr==hilfstring){
        printf("Fehler beim Konvertieren");
    }
    else{
        printf("Zahl: %ld\n",zahl);
    }
    
    return EXIT_SUCCESS;
}