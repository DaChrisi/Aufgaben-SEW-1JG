#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#include <conioex.h>
#define N 10


int main()
{
    int Autos[]={6,2,-6,3,4,-3,-4,-2}, counter=0, i=0, anzahl=0;
    anzahl=4;
    anzahl=anzahl*2;

    for(i=0;i<anzahl;i++)
    {
        if(Autos[i]>0)
        {
            counter++;
        }
        else
        {
            counter--;
        }
    }
    printf("%d",counter);


    return EXIT_SUCCESS;
}