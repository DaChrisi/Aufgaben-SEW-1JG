//Christian Wunder
//Dezimal zu Römisch
//12.1

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>

int main()
{
    int zahl=0;
    char speicher=0,nochmal=0;

    do
    {
        printf("Gebe hier die Zahl ein: ");
        scanf("%d",&zahl);

        if(zahl>1000)
        {
            while (zahl>1000)
            {
                printf("M");
                zahl=zahl-1000;
            }
            
        }
        
        if (zahl>500)
        {
            printf("D");
            zahl=zahl-500;
        }

        if (zahl>100)
        {
            while (zahl>100)
            {
                printf("C");
                zahl=zahl-100;
            }
        }

        if (zahl>50)
        {
            printf("L");
            zahl=zahl-50;
        }

        if (zahl>10)
        {
            while (zahl>10)
            {
                printf("X");
                zahl=zahl-10;
            }
        }

        if (zahl>5)
        {
            printf("V");
            zahl=zahl-5;
        }

        if (zahl>=1)
        {
            while (zahl>=1)
            {
                printf("I");
                zahl=zahl-1;
            }
        }
        
        else
        {
            printf("Error");
        }
        printf("\nWillst du nochmal starten(J/n): ");
        nochmal=getch();
    }
    while (nochmal='J');
    
    
    
    
    
    
    
    return EXIT_SUCCESS;
}