//Verbrauchsberechnung
//Christian Wunder
//23.11.2021

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variablen
    double akm=0.0;
    double ekm=0.0;
    double l=0.0;
    double Verbrauch=0.0;
    //Eingabe
    printf("Gebe hier den Anfangs Kilometer Stand ein: ");
    scanf("%lf",&akm);
    printf("Gebe hier den End Kilometer Stand ein: ");
    scanf("%lf",&ekm);
    printf("Gebe hier den Verbrauch ein (Liter): ");
    scanf("%lf",&l);
    //Rechnung
    Verbrauch=l/(ekm-akm)*100;
    printf("Verbrauch pro 100km: %lf km",Verbrauch);
    

    return 0;
}