#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#include <conioex.h>

#define MAX 21

long mystrlen(char sstring[]);

int main()
{
    char vorname[MAX]="Christian"; //9 Zeichen
    char nachname[MAX]="Wunder";
    int counter=0;
    printf("%d",mystrlen(vorname));

    printf("Hallo %s %s\n", vorname, nachname);
    return EXIT_SUCCESS;
}

long mystrlen(char sstring[])
{
    int i=0;
    while (sstring[i]!='\0')
    {
        i++;
    }
    return i;
}