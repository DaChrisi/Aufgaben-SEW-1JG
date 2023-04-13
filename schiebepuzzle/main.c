#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#include <conioex.h>
#include <string.h>
#include <ctype.h>
#define ROWS 4
#define COLS 4

void zufallBefuellen(int feld[][COLS]);
void feldAusgeben(int feld[][COLS]);
int spielzug(int feld[][COLS]);
int spielGeloest(int feld[][COLS],int geloest);


int main()
{
    int spielFeld[ROWS][COLS]={0};
    int geloest=0;

    srand(time(NULL));

    zufallBefuellen(spielFeld[ROWS][COLS]);
    feldAusgeben(spielFeld[ROWS][COLS]);
    geloest=spielGeloest(spielFeld[ROWS][COLS],geloest);
    return EXIT_SUCCESS;
}

void zufallBefuellen(int feld[][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            feld[i][j]=rand()%(16-1+1)+1;
        }
        
    }
    
}

void feldAusgeben(int feld[][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d \t",feld[i][j]);
        }
        printf("\n");
        
    }
    
}

int spielGeloest(int feld[][COLS],int geloest)
{
    int k=1;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (feld[i][j]==k)
            {
                k++;
                if(k == 15)
                {
                    geloest=1;
                }
            }
            
        }
        
    }
    return geloest;
    
}