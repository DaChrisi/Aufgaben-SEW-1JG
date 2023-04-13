#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define MAX 90
#define MIN 65
#define MAXANZAHL 1000

int main()
{
    char randChar=0;
    int i=0, counter=0;

    srand(time(NULL));

    for(i=0;i<MAXANZAHL;i=i+1)
    {
        randChar=rand()%(MAX-MIN+1)+MIN;
        // || = or (oder)
        // && = and (und)
        if(randChar=='A' || randChar=='E' || randChar=='I' || randChar=='O' || randChar=='U')
        {
            counter=counter+1;
        }
    }
    printf("Counter: %d",counter);


    return EXIT_SUCCESS;
}