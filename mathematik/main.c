#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#define MIN 10
#define MAX 99

int main()
{
    //Variabeln
    char nochmal=0;
    long anzahl=0;
    int i=0, bsumme=0, summe=0, ende=0, start=0, zufall=0;

    srand(time(NULL));

    do
    {
        printf("Anzahl: ");
        scanf("%ld",&anzahl);

        for (i=0; i < anzahl; i++)
        {
            zufall=rand()%(MAX-MIN+1)-MIN;
            printf("%ld",zufall);
            getch();
            summe=summe+zufall;
        }
        printf("Summe: ");
        scanf("%ld",&bsumme);
        if (summe==bsumme)
        {
            printf("Korrekt\t Zeit:%ld [ms]\n",(ende-start));
        }
        else
        {
            printf("Falsch");
        }
        

        

        printf("Nochmal(j/n)?");
        nochmal=getch();
    } while (nochmal=='j');
    
    return EXIT_SUCCESS;
}