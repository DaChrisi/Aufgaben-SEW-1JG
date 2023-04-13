//Christian Wunder
//14.02.2022

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <conioex.h>

int main()
{
    //Variablen
    int input=0, x=1, i=0;
    //Screen Clear
    system("cls");
    printf("Willkommen!\nMax Input=80\n");
    gotoxy(x,3);
    for (i = 0; i < 80; i++)
    {

        input = getch();
        //Switch
        switch (input)
        {
        case 'a':
            printf("01");
            break;
        
        case 'b':
            printf("02");
            break;

        case 'c':
            printf("03");
            break;

        case 'd':
            printf("04");
            break;
        
        case 'e':
            printf("05");
            break;

        case 'f':
            printf("06");
            break;

        case 'g':
            printf("07");
            break;

        case 'h':
            printf("08");
            break;

        case 'i':
            printf("09");
            break;

        case 'j':
            printf("10");
            break;

        case 'k':
            printf("11");
            break;

        case 'l':
            printf("12");
            break;
        
        case 'm':
            printf("13");
            break;
        
        case 'n':
            printf("14");
            break;
        
        case 'o':
            printf("15");
            break;
        
        case 'p':
            printf("16");
            break;
        
        case 'q':
            printf("17");
            break;
        
        case 'r':
            printf("18");
            break;
        
        case 's':
            printf("19");
            break;
        
        case 't':
            printf("20");
            break;
        
        case 'u':
            printf("21");
            break;
        
        case 'v':
            printf("22");
            break;
        
        case 'w':
            printf("23");
            break;
        
        case 'x':
            printf("24");
            break;
        
        case 'y':
            printf("25");
            break;
        
        case 'z':
            printf("26");
            break;
        default:
            break;
        }
        x=x+2;
        gotoxy(x,4);
    }
    return EXIT_SUCCESS;
}