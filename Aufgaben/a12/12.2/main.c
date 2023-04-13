#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#include <conioex.h>

int zaeler(int z, int n);

int main()
{
    system("cls");
    int z=0,n=100;
    int i=0;
    n=100;
    printf("Gebe hier die Kommastellen ein: ");
    scanf("%d",&z);
    i=zaeler(z,n);
    textcolor(CYAN);
    printf("\nGroesster Gemeinsamer Teiler: %d",i);
    z=z/i;
    n=n/i;
    textcolor(RED);
    printf("\nGekuerzeter Bruch: %d/%d",z,n);
    textcolor(WHITE);
    

    return EXIT_SUCCESS;
}

int zaeler(int z, int n)
{
    while ((z!=n)&&(n!=0)&&(z!=0))
    {
        if (z>=n)
        {
            z=z-n;
        }
        else
        {
            n=n-z;
        }
    }
    return z; 
}