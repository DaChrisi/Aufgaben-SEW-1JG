#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>

int rechne(long zahl);

int main()
{
    int zahl1=20, e=0;

    e=rechne(zahl1);
    printf("%d",e);
    

    return EXIT_SUCCESS;
}

int rechne(long zahl)
{
    long summe=0;
    long stelle=0;
    while (zahl!=0)
    {
        stelle=zahl%10;
        summe=summe+stelle;
        zahl=zahl/10;

    }

    return summe;
}