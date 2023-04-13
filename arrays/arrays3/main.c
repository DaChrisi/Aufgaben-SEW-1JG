#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#include <conioex.h>
#define MAXLENGTH 60
#define Z 'Z'
#define A 'A'

int gRS(char str[], int n);

int main()
{
    char zk1[MAXLENGTH]={0};
    char zk2[MAXLENGTH]={0};   
    long lenzk1=0, lenzk2=0;
    int i=0;
    srand(time(NULL));
    /*
    printf("Zeichenketter 1 eingeben: ");
    gets(zk1);
    printf("Zeichenketter 2 eingeben: ");
    gets(zk2);
    printf("%s\n%s\n", zk1, zk2);
    */

    gRS(zk1,5);
    gRS(zk2,5);
    lenzk1=strlen(zk1);
    lenzk2=strlen(zk2);
    int zk1, zk2;
    printf("%s\n%s\n", zk1, zk2);
    


    return EXIT_SUCCESS;
}

int gRS(char str[], int n)
{
    int i=0;

    if(n>59)
        return EXIT_FAILURE;

    for (i = 0; i < n; i++)
    {
        str[i]=rand()%(Z-A+1)+A;
        printf("%c\t ", str[n]);
    }
    str[i]='\0';
    return EXIT_SUCCESS;
    
}