//Celsius in Reaumur und Fahrenheit
//Christian Wunder
//23.11.2021

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variabeln
    double celsius=0.0;
    double reaumur=0.0;
    double fahrenheit=0.0;
    //Eingabe der Grade
    printf("Gebe hier die Grad ein: ");
    scanf("%lf",&celsius);
    //Berechnung(Reaumur,Fahrenheit)
    reaumur=celsius*4/5;
    fahrenheit=celsius*9/5+32;
    //Ausgabe
    printf("Celsius: %lf\n",reaumur);
    printf("Fahrenheit: %lf",fahrenheit);
    return 0;
}