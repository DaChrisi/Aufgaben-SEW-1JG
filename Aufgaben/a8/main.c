#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <math.h>

int main()
{
    int zahl1=0, i=0, p1=0, p2=0, s1=0, s2=0;

    printf("Dezimal: ");
    scanf("%d",&zahl1);

    for (i=4;i>0;i--)
    {
        p1=1<<i;
        p2=1<<(i-1);

        s1=zahl1&p1;
        s2=zahl1&p2;

        if (s1==p1&&s2==p2)
        {
            printf("0");
        }
        else if (s1!=p1&&s2!=p2)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }
    
    return EXIT_SUCCESS;
}