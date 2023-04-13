#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#include <conioex.h>

#define MIN 0
#define MAX 309

int main()
{
    double delta=0, maxdelta=0, max=0, min=0, tempVerlauf[100]={0};
    int i=0;
    srand(time(NULL));

    for (i = 0; i < 100; i++)
    {
        tempVerlauf[i]=rand()%((MAX-MIN+1)+MIN)/(double)10;
        printf("%.1lf\t",tempVerlauf[i]);
    }
    max=tempVerlauf[0];
    min=tempVerlauf[99];
    printf("\n\n");
    for(i=0;i<100;i++)
    {
        if(tempVerlauf[i]>max)
        {

        }
        
        if(tempVerlauf[i]<min)
        {
            
        }

        if(i!=99)
        {
            delta=tempVerlauf[i+1]-tempVerlauf[i]
        }
    }
    
    return EXIT_SUCCESS;
}