#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#include <conioex.h>
//----------------------------------------------------------------Const
#define MAX 9
#define MIN 1
//----------------------------------------------------------------Prototyp
int randomInt(int zahlen[]);

//----------------------------------------------------------------Main
int main()
{
    srand(time(NULL));
    int zahlen[10]={0}, counter=0, i=0;

    randomInt(zahlen);
    for(i=0;i<10;i++)
    {
        printf("%d\t",zahlen[i]);
    }

    for(i=0;i<10;i++)
    {
        if (zahlen[i]>zahlen[i+1])
        {
            counter++;
        }
    }

    if (counter&1)
    {
        textcolor(GREEN);
        printf("Gerade Permutation");
        textcolor(WHITE);
    }
    else
    {
        textcolor(RED);
        printf("Ungerade Permutation");
        textcolor(WHITE);
    }
    

    return EXIT_SUCCESS;
}

//----------------------------------------------------------------RandomInt
int randomInt(int zahlen[])
{
    //Variablen
    int i=0;

    for(i=0; i<10; i++)
    {
        zahlen[i]=rand()%(MAX-MIN+1)+MIN;
    }
    zahlen[i]='\0';
    return EXIT_SUCCESS;
}