#include <stdlib.h>
#include <stdio.h>

int main()
{
    int zahl=0, teiler=0, i=0, j=0;
    printf("Gebe hier die Zahl ein: ");
    scanf("%d", &zahl);
    for(j=1;j<10000;j++)
    {
        teiler=0;
        for (i=2; i < zahl/2; i=i+1)
        {
            if (zahl%i==0)
            {
                teiler=teiler+i;
            }
        }
        if (teiler==zahl)
        {
            printf("%d",teiler);
        }
        
    }
    printf("Es gibt %d Teiler",teiler);
    
    return EXIT_SUCCESS;
}