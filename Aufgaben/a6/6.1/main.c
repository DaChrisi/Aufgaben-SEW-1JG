//Christian Wunder
//Staffelrechnung
//11.1

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>

int main()
{
    int multiplikand=0, multiplikator=0, multiplikator2=0, anzahl=0, i=0, zahl=0;
    char nochmal=0;

    do
    {
        printf("Multiplikand: ");
        scanf("%d",&multiplikand);
        printf("Multiplikator: ");
        scanf("%d",&multiplikator);
        printf("Anzahl: ");
        scanf("%d",&anzahl);

        multiplikator2=multiplikator;

        for (i=0;i<anzahl;i++)
        {
            zahl=multiplikand*multiplikator;
            printf("%d\n",zahl);
            multiplikand=zahl;
            multiplikator++;
        }
        zahl=0;
        i=0;

        for (i=0;i<anzahl;i++)
        {
            zahl=multiplikand/multiplikator2;
            printf("%d\n",zahl);
            multiplikand=zahl;
            multiplikator2++;
        }
        printf("Willst du nochmal starten (J/n): \n");
        nochmal=getch();

    } while (nochmal=='j');
    
    
    
    return EXIT_SUCCESS;
}