#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#include <conioex.h>
#define ROWS 3
#define COLS 3

void outputField(char t[][COLS]);
char checkFinished(char t[][COLS],char spieler);

int main()
{
    printf("!Tik Tak Toe!\n");
    char tictactoe[ROWS][COLS]={{'.','.','.'},{'.','.','.'},{'.','.','.'}};
    char finished = 0;
    int row=0, col=0;
    char spieler='X';

    outputField(tictactoe);
    while(finished!='X'&&finished!='O')
    {
        printf("Zeile:  Spalte: ");
        scanf("%d%d",&row,&col);
        if(row<1||row>3||col<1||row>3||tictactoe[row-1][col-1]!='.')
        {
            printf("Nicht moeglich!");
            continue;
        }
        else
        {
            if(spieler=='X')
            {
                tictactoe[row-1][col-1]='X';
                spieler='O';
            }

            else
            {
                tictactoe[row-1][col-1]='O';
                spieler='X';
            }
        }
        outputField(tictactoe);
        checkFinished(tictactoe,spieler);
    }



    return EXIT_SUCCESS;
}

void outputField(char t[][COLS])
{
    int i=0, j=0;

    system("cls");
    for(i=0;i<ROWS;i++)
    {
        for(j=0;j<COLS;j++)
        {
            printf("%c\t",t[i][j]);
        }
        putchar('\n');
    }
}

char checkFinished(char t[][COLS],char spieler)
{
    if(t[0][0]&&t[0][1]&&t[2][2]=='X') return 'X';
    if(t[1][0]&&t[0][1]&&t[0][2]=='X') return 'X';
    if(t[2][0]&&t[0][1]&&t[1][2]=='X') return 'X';

    if(t[0][0]&&t[0][1]&&t[2][2]=='X') return 'X';
    if(t[0][1]&&t[1][1]&&t[2][2]=='X') return 'X';
    if(t[0][2]&&t[1][1]&&t[2][2]=='X') return 'X';

    if(t[0][0]&&t[1][1]&&t[2][2]=='X') return 'X';
    if(t[0][0]&&t[1][1]&&t[2][2]=='X') return 'X';
}