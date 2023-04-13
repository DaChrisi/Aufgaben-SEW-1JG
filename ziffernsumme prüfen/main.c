#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    long zahl=0;
    short stelle=0;
    int summe=0, zaehler=0;
    int random=0, i=0;
    srand(time(NULL));
    for (i=0; i < 10000; i=i+1)
    {
        summe=0;
        zahl=rand()%(1999-1000+1)+1000;
        while (zahl!=0)
        {
            stelle=zahl%10;
            summe=summe+stelle;
            zahl=zahl/10;
        }
        if(summe==15)
        {
            zaehler=zaehler+1;
        }

    }
    printf("Anzahl: %d",zaehler);

    return EXIT_SUCCESS;
}