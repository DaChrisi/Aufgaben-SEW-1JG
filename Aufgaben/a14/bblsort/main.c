#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#include <conioex.h>
void bubblesort(char s[]);

int main()
{
    char name[20]="Christian";
    
    bubblesort(name);
    puts(name);
    return EXIT_SUCCESS;
}

void bubblesort(char s[])
{
    int i=0, j=0;
    char help=0;

    for (i = 0; i < strlen(s); i++)
    {
        for (j = 0; j < strlen(s)-i-1; j++)
        {
            if (s[j]>s[j+1])
            {
                help=s[j];
                s[j]=s[j+1];
                s[j+1]=help;
            }
            
        }
        
    }
    
}