#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    //Variablen
    char zeichen=0, input=0;
    long start=0, ende=0;

    //Zeichen einlesen mit echo
    printf("Ohne Echo");
    zeichen=getch();
    putchar('\n');
    putchar(zeichen);

    //Zeichen einlesen mit echo
    printf("Echo");
    zeichen=getche();
    putchar('\n');
    putchar(zeichen);

    //entspricht scanf("%c",&zeichen);
    zeichen=getchar(); 
    putchar(zeichen);


    zeichen=rand()%26+65;
    printf("%c\n",zeichen);
    zeichen=getch();
    start=clock();
    zeichen=getch();
    ende=clock();
    printf("Zeit:  %ld",ende-start);
    if(input==zeichen)
    {
        printf("Zeit[ms]: %ld\n",ende-start);
    }
    else
    {
        printf("Falsches zeichen\n");
    }

    return EXIT_SUCCESS;
}