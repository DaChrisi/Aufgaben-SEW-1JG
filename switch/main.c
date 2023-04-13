#include <stdlib.h>
#include <stdio.h>

int main()
{
    int note=0;
    printf("Gebe hier die Note ein:");
    note=getchar();

    switch (note)
    {
    case 1:
        printf("Sehr gut\n");
        break;
    
    case 2:
        printf("Gut\n");
        break;

    default:
        printf("Ungültige Note\n");
        break;
    }

    return EXIT_SUCCESS;
}