//Christian Wunder
//Dezimal in Binär
//Bitoperatoren Anwenden
//22.01.22

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <math.h>

int main()
{
    //Variablen
    int zahl=0, zahl2=0, potenz=0, input1=0, input2=0;
    int i=0;
    char nochmal=0;

    //Do while Schleife
    do
    {
        printf("Zahl1: ");
        scanf("%d",&input1);
        printf("Zahl2: ");
        scanf("%d",&input2);

        printf("%d\t",input1);
        potenz=0;
        zahl=input1;
        zahl2=input2;
        i=0;
        for (i=8;i>0;i--)
        {
            potenz=pow(2,i);
            if(potenz<=zahl)
            {
                printf("1");
                zahl=zahl-potenz;
            }
            else
            {
                printf("0");
            }
        }
        printf("0\n");

        printf("~%d\t",input1);
        potenz=0;
        zahl=input1;
        zahl2=input2;
        i=8;
        for (i=8;i>0;i--)
        {
            
            potenz=pow(2,i);
            if(potenz<=zahl)
            {
                printf("0");
                zahl=zahl-potenz;
            }
            else
            {
                printf("1");
            }
        }
        printf("0\n");

        printf("%d>>1\t",input1);
        potenz=0;
        zahl=input1;
        zahl2=input2;
        i=0;
        zahl=zahl>>1;
        for (i=8;i>0;i--)
        {
            potenz=pow(2,i);
            if(potenz<=zahl)
            {
                printf("1");
                zahl=zahl-potenz;
            }
            else
            {
                printf("0");
            }
        }
        printf("0\n");

        printf("%d>>2\t",input1);
        potenz=0;
        zahl=input1;
        zahl2=input2;
        i=0;
        zahl=zahl>>2;
        for (i=8;i>0;i--)
        {
            potenz=pow(2,i);
            if(potenz<=zahl)
            {
                printf("1");
                zahl=zahl-potenz;
            }
            else
            {
                printf("0");
            }
        }
        printf("0\n");
        
        printf("%d<<1\t",input1);
        potenz=0;
        zahl=input1;
        zahl2=input2;
        i=0;
        zahl=zahl<<1;
        for (i=8;i>0;i--)
        {
            potenz=pow(2,i);
            if(potenz<=zahl)
            {
                printf("1");
                zahl=zahl-potenz;
            }
            else
            {
                printf("0");
            }
        }
        printf("0\n");

        printf("%d<<2\t",input1);
        potenz=0;
        zahl=input1;
        zahl2=input2;
        i=0;
        zahl=zahl<<2;
        for (i=8;i>0;i--)
        {
            potenz=pow(2,i);
            if(potenz<=zahl)
            {
                printf("1");
                zahl=zahl-potenz;
            }
            else
            {
                printf("0");
            }
        }
        printf("0\n");
        printf("\n");

        printf("%d\t",input1);
        potenz=0;
        zahl=input1;
        zahl2=input2;
        i=8;
        for (i=8;i>0;i--)
        {
            
            potenz=pow(2,i);
            if(potenz<=zahl)
            {
                printf("1");
                zahl=zahl-potenz;
            }
            else
            {
                printf("0");
            }
        }
        printf("0\n");

        printf("%d\t",input2);
        potenz=0;
        zahl=input1;
        zahl2=input2;
        i=0;
        for (i=8;i>0;i--)
        {
            potenz=pow(2,i);
            if(potenz<=zahl2)
            {
                printf("1");
                zahl2=zahl2-potenz;
            }
            else
            {
                printf("0");
            }
        }
        printf("0\n");

        printf("%d&%d\t",input1,input2);
        potenz=0;
        zahl=input1;
        zahl2=input2;
        zahl2=zahl2&zahl;
        i=0;
        for (i=8;i>0;i--)
        {
            potenz=pow(2,i);
            if(potenz<=zahl2)
            {
                printf("1");
                zahl2=zahl2-potenz;
            }
            else
            {
                printf("0");
            }
        }
        printf("0\n");

        printf("%d|%d\t",input1,input2);
        potenz=0;
        zahl=input1;
        zahl2=input2;
        zahl2=zahl2|zahl;
        i=0;
        for (i=8;i>0;i--)
        {
            potenz=pow(2,i);
            if(potenz<=zahl2)
            {
                printf("1");
                zahl2=zahl2-potenz;
            }
            else
            {
                printf("0");
            }
        }
        printf("0\n");

        printf("%d^%d\t",input1,input2);
        potenz=0;
        zahl=input1;
        zahl2=input2;
        zahl2=zahl2^zahl;
        i=0;
        for (i=8;i>0;i--)
        {
            potenz=pow(2,i);
            if(potenz<=zahl2)
            {
                printf("1");
                zahl2=zahl2-potenz;
            }
            else
            {
                printf("0");
            }
        }
        printf("0\n");
        printf("\nNochmal?(j/n): ");
        nochmal=getch();
    } while (nochmal=='j'||nochmal=='J');
    
    return EXIT_SUCCESS;
}