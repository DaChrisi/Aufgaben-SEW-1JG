//Würfelspiel
//Christian Wunder
//18.12.2021

//Includes
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
//Farben
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main()
{
    printf(ANSI_COLOR_RED"!Willkommen beim Wuerfelspiel!"ANSI_COLOR_RESET);
    printf("\nDie erste Zahl deines Zuges wird für dich gewürfelt danach drücke die w taste um nochmal zu würfeln oder eine andere taste um dein Ergebniss zu speichern\n");
    //Variablen
    int spieler1=0, spieler2=0, speicher1=0, speicher2=0, zahl=0;
    char nochmal=0;
    //Zeit für Random
    srand(time(NULL));

    do
    {
        //Setzt die Variablen zurück
        speicher1=0;
        zahl=0;
        nochmal=0;
        printf("________________________\n");
        printf(ANSI_COLOR_YELLOW"Spieler 1 ist dran!"ANSI_COLOR_RESET);
        printf("\n________________________\n");
        do
        {
            //Generiert Random zahl
            zahl=rand()%(6-1+1)+1;
            //Checkt ob die Zahl 1 ist
            if (zahl<2)
            {
                printf("%d\n",zahl);
                nochmal='n';
                speicher1=0;
                printf("\n-------------------------------------------\n");
                printf("Dir wurden keine Punkte hinzugefügt!\n");
                printf("-------------------------------------------\n");
            }
            else
            {
                printf("%d\t",zahl);
                speicher1=speicher1+zahl;
                nochmal=getch();
                if (nochmal=='w')
                {
                    nochmal='w';
                }
                else
                {
                    nochmal='n';
                    spieler1=spieler1+speicher1;
                }
                
            }
            


        } while (nochmal=='w' || nochmal=='W');
        //Gibt den Punktestand an
        printf("\nPunktestand: %d\n",spieler1);
        //Falls der Spieler 100 oder mehr Punkte hat
        if (spieler1>100)
        {
            printf(ANSI_COLOR_GREEN"!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
            printf("Gewonnen Spieler 1\n");
            printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!\n"ANSI_COLOR_RESET);
            //Programm endet
            break;
        }

        //Setzt die Variablen zurück
        speicher2=0;
        zahl=0;
        nochmal=0;
        printf("________________________\n");
        printf(ANSI_COLOR_YELLOW"Spieler 2 ist dran!"ANSI_COLOR_RESET);
        printf("\n________________________\n");
        do
        {
            //Generiert Random zahl
            zahl=rand()%(6-1+1)+1;
            if (zahl<2)
            {
                //Checkt ob die Zahl 1 ist
                printf("%d\t",zahl);
                nochmal='n';
                speicher2=0;
                printf("\n-------------------------------------------\n");
                printf("Dir wurden keine Punkte hinzugefügt!\n");
                printf("-------------------------------------------\n");
            }
            else
            {
                printf("%d\t",zahl);
                speicher2=speicher2+zahl;
                nochmal=getch();
                if (nochmal=='w')
                {
                    nochmal='w';
                }
                else
                {
                    nochmal='n';
                    spieler2=spieler2+speicher2;
                }
                
            }
            


        } while (nochmal=='w' || nochmal=='W');
        //Gibt den Punktestand an
        printf("\nPunktestand: %d\n",spieler2);
        //Falls der Spieler 100 oder mehr Punkte hat
        if (spieler2>100)
        {
            printf(ANSI_COLOR_GREEN"!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
            printf("Gewonnen Spieler 2\n");
            printf("!!!!!!!!!!!!!!!!!!!!!!!!!!!\n"ANSI_COLOR_RESET);
            //Programm endet
            break;
        }
        
        
    } while (spieler1<100 || spieler2<100);
    return EXIT_SUCCESS;
}