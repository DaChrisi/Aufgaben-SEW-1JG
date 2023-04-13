#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>

double zzzz(double zahl1, double zahl2);

int main()
{
    double zahl1=0,zahl2=0, res=0;

    printf("1.Zahl: ");
    scanf("%ld",&zahl1);
    printf("2.Zahl: ");
    scanf("%ld",&zahl2);
    res=zzzz(zahl1,zahl2);
    printf("%ld",res);
    return EXIT_SUCCESS;
}

double zzzz(double zahl1, double zahl2)
{
    double result=0;

    result=zahl1+zahl2;

    return result;
}