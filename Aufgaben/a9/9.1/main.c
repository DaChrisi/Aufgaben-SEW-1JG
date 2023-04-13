//Christian Wunder
//13.02.2022

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>

int main()
{
    //Var
    int zahl1=0, zahl2=0, speicher=0;
    char zeichen='+';

    printf("Gebe hier deine Rechnung ein: ");
    
    scanf("%d",&zahl1);
    getchar();
    scanf("%d",&zahl2);
    getchar();
    scanf("%c",&zeichen);
    getchar();


    switch (zeichen)
    {
    case '-':
        speicher=zahl1-zahl2;
        break;
    
    case '+':
        speicher=zahl1+zahl2;
        break;

    case '/':
        speicher=zahl1/zahl2;
        break;

    case '*':
        speicher=zahl1*zahl2;
        break;
    
    default:
        break;
    }
    //While Schleife
    do
    {
        
        scanf("%d",&zahl2);
        getchar();
        if (zahl2!=0)
        {
            scanf("%c",&zeichen);
            getchar();
            switch (zeichen)
            {
            case '-':
                speicher=speicher-zahl2;
                break;
            
            case '+':
                speicher=speicher+zahl2;
                break;

            case '/':
                speicher=speicher/zahl2;
                break;

            case '*':
                speicher=speicher*zahl2;
                break;
            
            default:
                break;
            }
        }
    } while (zahl2!=0);
    

    printf("Ergebniss: %d",speicher);
    return EXIT_SUCCESS;
}