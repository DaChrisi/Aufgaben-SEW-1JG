#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#include <conioex.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char vorname[31]="";
    char nachname[51]="";
    char initialen[5]="";
    long kandidaten=63;
    char meldung[1024]="";
    char zahlalsstring[]="123";
    char *eptr=NULL;

    sprintf(meldung,"Heute waren %ld Kandidaten bei der RDP",kandidaten);
    puts(meldung);
    printf("Vorname: ");
    fgets(vorname,30,stdin);
    printf("Nachname: ");
    gets(nachname);
    initialen[0]=vorname[0];
    initialen[1]='.';
    initialen[2]=nachname[0];
    puts(initialen);
    kandidaten=atol(zahlalsstring);
    kandidaten=strtol(zahlalsstring,&*eptr,10);
    return EXIT_SUCCESS;
}