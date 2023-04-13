//Busterminal
//Christian Wunder
//24.11.2021
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NextBusmin=0.0;
    int NextBushour=0.0;
    int hour=0.0;
    int min=0.0;
    int time=0.0;
    printf("Gebe hier die Anzahl an(hhmm): ");
    scanf("%d",&time);

    hour=time/100;
    min=time%100;

    if(min<30) 
    {
        min=30-min;
        NextBushour=hour;
        NextBusmin=30;
    }

    else if(min == 30 || min == 0)
    {
        printf("DER BUSFAHRER IST TOXIC WEIL DU NOCH NICHT DA BIST RENN!!!!");
    }

    else if(min>30 && min <= 60)
    {
        min=60-min;
        NextBushour=hour+1;
        NextBusmin= 0;
    }

    else
    {
        printf("Error!");
    }

    printf("Nachester Bus kommt in %d Minuten\n", min);

    if(NextBusmin < 10)
    {
        printf("Um %d:0%d Uhr",NextBushour,NextBusmin);
    }

    else
    {
        printf("Um %d:%d Uhr",NextBushour,NextBusmin);
    }

    return 0;
}