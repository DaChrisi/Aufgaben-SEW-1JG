#include <stdio.h>
#include <stdlib.h>

int main()
{
    long zahl=0;
    short stelle=0;
    int summe=0;
    printf("Zahl: ");
    scanf("%ld", &zahl);
    while (zahl!=0)
    {
        stelle=zahl%10;
        summe=summe+stelle;
        zahl=zahl/10;

    }
    printf("Summe: %d",summe);
    return EXIT_SUCCESS;
    
}