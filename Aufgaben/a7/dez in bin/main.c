//Christian Wunder
//19.01.2022
//Dezimal in  Binär

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
//Umlaute
#define AE (unsigned char)142
#define ae (unsigned char)132
#define OE (unsigned char)153
#define oe (unsigned char)148
#define UE (unsigned char)154
#define ue (unsigned char)129
#define ss (unsigned char)225
#define b (unsigned char)205

int main()
{
    int index[32], zahl=0, rest=0, zahlf=0, i=0, k=0;
    char nochmal=0;

    do
    {
        for (k=0;k<40;k++)
        {
            printf("%c",b);
        }
        printf("\n");

        printf("Dezimal: ");
        scanf("%d",&zahl);

        for (i=0;zahl>0;i++)
        {
            index[i]=zahl%2;
            zahl=zahl/2;
        }

        printf("Bin%cr: ",ae);

        for (;i>0;i--)
        {
            printf("%d",index[i-1]);
        }

        printf("\n");
        printf("Willst du nochmal(J/n): ");
        nochmal=getch();
        printf("\n");

    } 
    while (nochmal=='J' || nochmal=='j');
    
    
    
    

    return EXIT_SUCCESS;
}