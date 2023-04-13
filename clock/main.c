#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>

int main()
{
    long start=0, ende=0, i=0;
    start=clock();
    while (i!=8)
    {
        i=i+1;
        printf("Hello World!");
    }
    
    ende=clock();
    printf("%ld ms",(ende-start));
    return EXIT_SUCCESS;
}