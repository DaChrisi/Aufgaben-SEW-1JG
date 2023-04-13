#include <stdlib.h>
#include <stdio.h>

int main()
{
    long zahl1=0, zahl2=0;
    char nochmal=0;
    do
    {
        

        printf("Gebe hier die erste Zahl ein:");
        zahl1=getchar();
        printf("Gebe hier die zweite Zahl ein:");
        zahl2=getchar();

        if (zahl1=='0')
        {
            putchar(zahl2);
        }

        else
        {
            while(zahl1 != zahl2)
            {
                if (zahl1>zahl2)
                {
                    zahl1=zahl1-zahl2;
                }

                else
                {
                    zahl2=zahl2-zahl1;
                }
                
            }
        }
        printf("Nochmal?(J/N)");
        nochmal=getchar();
    }
    while (nochmal=='j' || nochmal=='J');
    return EXIT_SUCCESS;
}