#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#include <conioex.h>

#define MIN 'A'
#define MAX 'Z'

int main()
{
    int i=0, counter=0;
    char feld1[10]={0};
    char feld2[10]={0};
    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        feld1[i]=rand()%(MAX-MIN+1)+MIN;
        printf("%c\t",feld1[i]);
    }
    putchar('\n');
    for (i = 0; i < 10; i++)
    {
        feld2[i]=rand()%(MAX-MIN+1)+MIN;
        printf("%c\t",feld2[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (feld1[i]==feld2[i])
        {
            counter++;
        }
    }
    printf("\n\n %d",counter);
    return EXIT_SUCCESS;
}