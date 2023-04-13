//Christian Wunder
//15.02.22
//Berechnung von Widerständen in Schaltungen

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <conioex.h>
//Rechnung
void ss(void);
void ps(void);
void kombi(void);
//Grafik
void ssp(void);
void psp(void);
void kombip(void);
//Menu
void Zeiger(int rp, int ap);

int main()
{
    int input=0, input2=0, position=1;
    system("cls");
    printf("---------------------------------\n");
    printf("Berechnung von Widerstaenden\n");
    printf("---------------------------------\n");
    //Menu (Altmodisches design mit Zahlen zum Auswählen)
    /*
    printf("[1]- Serienschaltung\n");
    printf("[2]- Parallelschaltung\n");
    printf("[3]- Kombination\n");
    printf("[4]- Ende\n\n");
    printf("Deine Entscheidung: ");
    scanf("%d",&input);
    printf("-------------------------------------------------------------------------\n");
    */
   //Menu (Neu mit Falltasten Steuerbar)
   while (input!=13)
   {
        textcolor(RED);
        system("cls");
        printf("---------------------------------\n");
        printf("Berechnung von Widerstaenden\n");
        printf("---------------------------------\n");
        textcolor(WHITE);
        Zeiger(1,position);
        printf("Serienschaltung\n");
        Zeiger(2,position);
        printf("Parallelschaltung\n");
        Zeiger(3,position);
        printf("Kombination\n");
        Zeiger(4,position);
        printf("Ende\n");

        input=getch();

        if (input==80&&position!=4)
        {
            position++;
        }
        else if (input==72&&position!=1)
        {
            position--;
        }
        else{
            position=position;
        }
   }
    switch (position)
    {
    case 1:
        ssp();
        break;

    case 2:
        psp();
        break;
    
    case 3:
        kombip();
        break;
    
    case 4:
        return EXIT_SUCCESS;
    
    default:
        break;
    }


    
    return EXIT_SUCCESS;
}
//Zeiger der die Position Bestimmt
void Zeiger(int rp, int ap)
{
    if (rp==ap)
    {
        printf("[>]");
    }
    else
    {
        printf("[ ]");
    }
    
}

//Serienschaltung
void ss(void)
{
    int r1=0, r2=0, res=0;
    printf("R1 <In Ohm>: ");
    scanf("%d",&r1);
    printf("R2 <In Ohm>: ");
    scanf("%d",&r2);
    res=r1+r2;
    printf("---------------------------------\n");
    printf("Rges: %d Ohm",res);
    return EXIT_SUCCESS;
}
//Parallelschaltung
void ps(void)
{
    int r1=0, r2=0, res=0;
    printf("R1 <In Ohm>: ");
    scanf("%d",&r1);
    printf("R2 <In Ohm>: ");
    scanf("%d",&r2);
    res=r1*r2/(r1+r2);
    printf("---------------------------------\n");
    printf("Rges: %d Ohm",res);
}
//Kombination
void kombi(void)
{
    int r1=0, r2=0, r3=0, r12=0, res=0;
    printf("R1 <In Ohm>: ");
    scanf("%d",&r1);
    printf("R2 <In Ohm>: ");
    scanf("%d",&r2);
    printf("R3 <In Ohm>: ");
    scanf("%d",&r3);
    res=(r1+r2);
    res=res*r3/(res+r3);
    printf("---------------------------------\n");
    printf("Rges: %d Ohm",res);
}

void ssp(void)
{
    textcolor(LIGHTBLUE);
    printf("-------------------------------------------------------------------------\n");
    printf("      |------------|              |------------|\n");
    printf("      |            |              |            |\n");
    printf("------|    R1      |--------------|    R2      |--------\n");
    printf("      |            |              |            |\n");
    printf("      |------------|              |------------|\n");
    printf("-------------------------------------------------------------------------\n");
    textcolor(WHITE);
    ss();
}
void psp(void)
{
    textcolor(LIGHTBLUE);
    printf("-------------------------------------------------------------------------\n");
    printf("             |------------|\n");
    printf("             |            |\n");
    printf("      |------|    R2      |------|\n");
    printf("      |      |            |      |\n");
    printf("      |      |------------|      |\n");
    printf("      |                          |\n");
    printf("------|                          |-----------\n");
    printf("      |      |------------|      |\n");
    printf("      |      |            |      |\n");
    printf("      |------|    R1      |------|\n");
    printf("             |            |\n");
    printf("             |------------|\n");
    printf("-------------------------------------------------------------------------\n");
    textcolor(WHITE);
    ps();
}
void kombip(void)
{
    textcolor(LIGHTBLUE);
    printf("-------------------------------------------------------------------------\n");
    printf("                  |------------|  |------------|\n");
    printf("                  |            |  |            |\n");
    printf("                |-|    R2      |--|    R1      |-|\n");
    printf("                | |            |  |            | |\n");
    printf("                | |------------|  |------------| |\n");
    printf("                |                                |\n");
    printf("          ------|                                |-------\n");
    printf("                |      |------------|            |\n");
    printf("                |      |            |            |\n");
    printf("                |------|    R1      |------------|\n");
    printf("                       |            |\n");
    printf("                       |------------|\n");
    printf("-------------------------------------------------------------------------\n");
    textcolor(WHITE);
    kombi();
}

