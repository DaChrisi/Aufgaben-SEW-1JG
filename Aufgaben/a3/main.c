//Julian Datum Rechnen
//Christian Wunder
//30.11.2021

#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    //Variablen
    int jahr = 0.0;
    int jahr1 = 0.0;
    int h2 = 0.0, u2 = 0.0, v2 = 0.0, w2 = 0.0, m2 = 0.0, n2 = 0.0, a2 = 0.0, b2 = 0.0, c2 = 0.0, d2 = 0.0;
    int monat = 0.0;
    int tag = 0.0;
    int wochentag = 0.0;
    int maerz = 0.0;
    int april = 0.0;
    int n1 = 0.0;
    int c1 = 0.0;
    int b1 = 0.0;
    int a1 = 0.0;
    int k1 = 0.0;
    int e2 = 0.0;
    int h1 = 0.0;
    
    //Input
    printf("Gebe hier den Tag ein: ");
    scanf("%lf",&tag);
    printf("Gebe hier das Monat ein: ");
    scanf("%lf",&monat);
    printf("Gebe hier das Jahr ein: ");
    scanf("%lf",&jahr);

    //Julianisch Check
    if (monat > 2)
    {
        monat = monat - 3;
        jahr1 = jahr;
    }
    else
    {
        monat = monat + 9;
        jahr1 = jahr - 1;
    }

    //Julianische Rechnung
    h1 = jahr1 / 100;
    k1 = jahr1 % 100;
    a1 = (146097 * h1) / 4;
    b1 = (1461 * k1) / 4;
    c1 = (153 * monat + 2) / 5;
    n1 = a1 + b1 + c1 + tag + 1721119;
    wochentag = n1 % 7;

    //Ostersonntag Rechnung
    h2 = jahr / 100;
    u2 = h2 / 4;
    v2 = (h2 - 17) / 25;
    w2 = (h2 - v2) / 3;
    m2 = (15 + h2 -u2 - w2) % 30;
    n2 = (4 + h2 - u2) % 7;
    a2 = jahr % 19;
    b2 = jahr % 4;
    c2 = jahr % 7;
    d2 = (19 * a2 + m2) % 30;
    e2 = ( 2* b2 + 4 * c2 + 6 * d2 + n2) % 7;
    maerz = 22 + d2 +e2;
    april = d2 + e2 - 9;

    //Ausgabe Julianisch
    printf("Julianisch: %d\n", n1);
    printf("Wochentagsnummer: %d (0 = Montag, 1 = Dienstag...)\n", wochentag);
  
    //Ostersonntag check
    if (april == 26)
    {
        april = 19;
    }
    if (april == 25 && d2 == 28 && e2 == 6 && a2 > 10)
    {
        april = 18;
    }
    if (maerz > 31)
    {
        printf("Der Ostersonntag ist am %d. April.", april);
    }
    else
    {
        printf("Der Ostersonntag ist am %d. Maerz.", maerz);
    }

 
    return 0;
}