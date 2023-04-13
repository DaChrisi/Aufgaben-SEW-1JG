#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#include <conioex.h>
#include <string.h>
#include <ctype.h>

void Usage(char *progName) {
    fprintf(stderr, "Usage: %s basis exponent",progName);
    exit(EXIT_FAILURE);
}

int main(int argc, char *argv[])
{
    long basis=0, exponent=0, ergebniss=0;
    char *eptr=NULL;

    if(argc!=3){
        Usage(argv[0]);
    }

    basis=strtol(argv[1],&eptr,10);
    if(*eptr!='\0'|| eptr==argv[1]){
        Usage(argv[0]);
    }

    exponent=strtol(argv[2],&eptr,10);
    if(*eptr!='\0'|| eptr==argv[2]){
        Usage(argv[0]);
    }

    ergebniss=pow(basis,exponent);
    printf("Ergebnis: %ld",ergebniss);

    return EXIT_SUCCESS;
}