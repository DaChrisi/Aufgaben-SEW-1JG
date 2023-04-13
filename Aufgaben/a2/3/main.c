//Volumen Berechnung
//Christian Wunder
//23.11.2021

#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main()
{
    //Variabeln
    double r=0.0;
    double h=0.0;
    double Volumen=0.0;
    double Mantel=0.0;
    //Höhe eingeben
    printf("Gebe hier die Höhe ein: ");
    scanf("%lf",&h);
    //Radius Eingeben
    printf("Gebe hier den Radius ein: ");
    scanf("%lf",&r);
    //Rechnung
    //V = r^2*pi*h
    Volumen=r*r*PI*h;
    //Mantel
    //2*PI*r*h
    Mantel=2*PI*r*h;
    //Ausgabe
    printf("Das Volumen beträgt: %.2lf\n",Volumen);
    printf("Die Fläche des Mantels beträgt: %.2lf\n",Mantel);
    return 0;
}