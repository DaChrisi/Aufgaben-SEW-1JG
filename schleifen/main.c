#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i=0;
    int a=1;
    int b=1;
    char nochmal=0;

    //For schleife
    for(i=1;i<=10;i=i+1){
        printf("%d\t",i);
    }
    putchar('\n');

    //While schleife
    while (a<=10)
    {
        printf("%d\t",a);
        a=a+1;
    }
    putchar('\n');

    //Do while schleife
    do
    {
        printf("%d\t",b);
        b=b+1;
    }
    while (b<=10);

    //Do while repeat
    do
    {
        printf("Willst du das Programm nochmal Starten(j/n)");
        nochmal=getchar();
    }
    
    while (nochmal=='J' || nochmal=='j');
    
    
    return EXIT_SUCCESS;
}