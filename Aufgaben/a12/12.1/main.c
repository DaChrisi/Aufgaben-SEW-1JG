//Christian Wunder
//4.03.2022
//Zahlen Umkehrer und vergleicher

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#include <conioex.h>

int uK(int zahl);
int vG(int zahl,int umkehr);

int main()
{
    int umkehr=0, zahl=0;

    printf("Geben sie hier eine Zahl ein: ");
    scanf("%d",&zahl);

    umkehr=uK(zahl);
    vG(zahl,umkehr);
    
    return EXIT_SUCCESS;
}

int uK(int zahl)
{
    int rest=0, umkehr=0, i=0;

    for (int i = 0; zahl > 0 ; ++i) 
	{ 
		rest = zahl % 10;
		zahl = zahl / 10;
		umkehr = umkehr * 10 + rest;
	}
    return umkehr;
}

int vG(int zahl,int umkehr)
{
    if(zahl>umkehr)
    {
        printf("Die Umgekehrte Zahl ist kleiner!");
    }

    if(zahl<umkehr)
    {
        printf("Die Umgekehrte Zahl ist größer!");
    }

    if(zahl==umkehr)
    {
        printf("Die Umgekehrte Zahl ist gleich groß!");
    }
}