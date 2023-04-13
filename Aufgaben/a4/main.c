//Noten berechnung
//Christian Wunder
//07.12.2021

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    double pruefnote=0, abschlussnote=0;
    int augenfarbe=0, frisur=0, wetter=0;

    printf("Gebe hier die Note ein: \n");
    scanf("%lf",&pruefnote);
    printf("Gebe hier die Augenfarbe ein(Dunkel=1,Hell=0): \n");
    scanf("%d",&augenfarbe);
    printf("Gebe hier die Frisur ein(Kurz=1,Lange=0): \n");
    scanf("%d",&frisur);
    printf("Gebe hier das Wetter ein(Ja = 1, nein =0): \n");
    scanf("%d",&wetter);

    //Wetter
    if (wetter==1) 
    {
        abschlussnote = pruefnote - 1;
    }
    
    //Augenfarbe dunkel
    else if(augenfarbe==1)
    {
        //Kurz
        if(frisur==1)
        {
            abschlussnote = pruefnote + (10/100);
        }

        //Lange
        else if(frisur==0)
        {
            abschlussnote = pruefnote - (10/100);
        }
    }

    //Augenfarbe hell
    else if(augenfarbe==0)
    {

        //Kurz
        if(frisur==1)
        {
            abschlussnote = pruefnote - (10/100);
        }

        //Lange
        else if(frisur==0)
        {
            abschlussnote = pruefnote + (10/100);
        }
    }
    else
    {
        printf("Error");
    }
    abschlussnote=abschlussnote+0.5;
    printf("Abschlussnote: %.0lf",abschlussnote);

    return EXIT_SUCCESS;
}