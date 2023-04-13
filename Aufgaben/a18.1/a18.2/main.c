#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#include <conioex.h>
#include <string.h>
#include <ctype.h>

void genTip(int s[]);
void ausgabe(int s[]);

int main(int argc, char *argv[])
{
    srand(time(NULL));
    int tip[6]={0}, test=0;
    long zahl=0;
    char *eptr=0;
    zahl=strtol(argv[1],&eptr,10);
    
    for(int i=0;i<zahl;i++)
    {
        printf("%d) \t ",i);
        genTip(tip);
        ausgabe(tip);
    }

    return EXIT_SUCCESS;
}

void genTip(int s[])
{
    for(int i=0;i<6;i++)
    {
        s[i]=rand()%(45-1+1)+1;
    } 
}

void ausgabe(int s[])
{
    int i=0;
    for(i=0;i<6;i++)
    {
        printf("%d  ",s[i]);
    }
    printf("\n");
}