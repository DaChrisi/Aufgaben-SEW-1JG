//Passwort Generator

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#include <conioex.h>
//----------------------------------------------------------Prototypen
char GPasswort(char array[],int input);
char GkPasswort(char array[],int input);
//----------------------------------------------------------Main
int main()
{
    //array anlegen mit Passlength Länge (char)
    //Passwort mit Zufälligen Großbuchstaben erzeugen
    //Passwort mit Zufälligen Groß und kleinBuchstaben
    char buchstaben[20]={0}, input=0;
    srand(time(NULL));

    printf("Gebe hier die Laenge ein(Max 20): ");
    scanf("%d",&input);

    if (input>20)
    {
        textcolor(RED);
        printf("Das Passwort ist zu Lange");
        textcolor(WHITE);
    }
    
    else
    {

        GPasswort(buchstaben,input);
        printf("Grossbuchstaben:\n");
        textcolor(GREEN);
        puts(buchstaben);
        textcolor(WHITE);

        GkPasswort(buchstaben,input);
        printf("Grossbuchstaben und Kleinbuchstaben:\n");
        textcolor(BLUE);
        puts(buchstaben);
        textcolor(WHITE);
    }
    
    return EXIT_SUCCESS;
}

//----------------------------------------------------------Generiert Passwort mit Großbuchstaben
char GPasswort(char array[],int input)
{
    int i=0;

    for(i=0;i<input;i++)
    {
        array[i]=rand()%(90-65+1)+65;
    }
    array[i]='\0';
}

//----------------------------------------------------------Generiert Passwort mit Großbuchstaben und Kleinbuschstaben
char GkPasswort(char array[],int input)
{
    int kog=0, i=0;

    for(i=0;i<input;i++)
    {
        kog=rand()%(2-1+1)+1;
        if(kog==1)
        {
            array[i]=rand()%(90-65+1)+65;
        }
        else
        {
            array[i]=rand()%(122-97+1)+97;
        }
    }
}