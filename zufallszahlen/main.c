//Zufallszahlen
//Christian Wunder
//02.12.2021

#include <stdlib.h>
#include <stdio.h>
//Time paket hinzufügen
#include <time.h>

int main()
{
    //Variabelen
    int zufallszahl=0;
    //setzt den Random auf
    srand(time(NULL));
    //Pseudozufallzahl im Bereich von 0 .. 32767
    zufallszahl=rand();
    //Min,Max } rand()%(max-min+1)+min 

    return EXIT_SUCCESS;
}