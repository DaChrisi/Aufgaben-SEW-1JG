#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#include <conioex.h>
#include <string.h>
#include <ctype.h>

int genG();
int genK();
int genZ();
int genS();


int main()
{
    srand(time(NULL));
    char passwort[10]={0};
    int auswahl=0;
    int valid=0;


    for (int j = 0; j < 100; j++)
    {
        for(int i=0;i<7;i++)
        {
            auswahl=rand()%(4-1+1)+1;
            switch (auswahl)
            {
            case 1:
                passwort[i]=genG();
                break;

            case 2:
                passwort[i]=genK();
                break;

            case 3:
                passwort[i]=genZ();
                break;
            
            case 4:
                passwort[i]=genS();
                break;
            }
            
        }
        puts(passwort);
        
        printf("\n");
    }
    

    return EXIT_SUCCESS;
}

int genG()
{
    int random=0;
    random=rand()%(90-65+1)+65;
    return random;
}

int genK()
{
    int random=0;
    random=rand()%(122-97+1)+97;
    return random;
}

int genZ()
{
    int random=0;
    random=rand()%(57-48+1)+48;
    return random;
}

int genS()
{
    int random=0;
    random=rand()%(47-33+1)+33;
    return random;
}