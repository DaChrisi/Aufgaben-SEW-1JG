//Flächen berechnen
//Christian Wunder
//24.11.2021

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double p=0.0;
    double f=0.0;
    double d=0.0;
    double h1=0.0;
    double h2=0.0;
    double l=0.0;

    printf("Gebe hier die Höhe 1 ein:");
    scanf("%lf",&h1);
    printf("Gebe hier die Höhe 2 ein:");
    scanf("%lf",&h2);
    printf("Gebe hier die länge ein:");
    scanf("%lf",&l);

    d=(h1+h2)/2;
    f=d*l/100;
    p=f*96;

    printf("Preis: %.2lf", p);
    return 0;
}