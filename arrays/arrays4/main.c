#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#include <conioex.h>

#define MAX 383
#define MIN 364

void genTemp(double kpt[]);
int cF(double kpt[]);

//----------------------------------------------------------------Main
int main()
{
    srand(time(NULL));
    int i=0;
    double kpt[30]={0};

    genTemp(kpt);
    printf("%d",cF(kpt));

    return EXIT_SUCCESS;
}

//----------------------------------------------------------------GENTEMP
void genTemp(double kpt[])
{
    double r=0;
    int i=0;

    for(i=0;i<29;i++)
    {
        r=rand()%(MAX-MIN+1)+MIN;
        r=r/10;
    }
}

//----------------------------------------------------------------KPT
int cF(double kpt[])
{
    int i=0, counter=0;
    for (i=0;i<30;i++)
    {
        if (kpt[i]>36.5)
        {
            counter++;
        }
        
    }
    return counter;
    
}