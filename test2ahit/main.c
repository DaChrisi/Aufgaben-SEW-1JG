/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char klasse[8];
    int katalognr;
    char name[100];
    int fehlstunden;
}Person;

int search(char klasse[], int katalognr, Person Schueler[], int feldgroesse)
{
    for(int i=0;i<200;i++)
    {
        if (klasse==Schueler[i].klasse && katalognr==Schueler[i].katalognr)
        {
            return i;
        }
        
    }
    return -1;
}



int main(void)
{
    Person schueler[200];
    FILE *fp;
    int index;

    fp = fopen("fehlstunden.dat","rb");

    if(fp==NULL)
    {
        printf("Fehler");
        return EXIT_FAILURE;
    }

    if(fread(&schueler,sizeof(schueler),200,fp)!=200)
    {
        printf("Fehler beim Einlesen der 200 Datensätze");
        return EXIT_FAILURE;
    }
    fclose(fp);

    index = search("1AHIT",12,schueler,200);

    if(index == -1)
    {
        printf("Person wurde nicht gefunden");
    }

    else
    {
        printf("%d",schueler[index].fehlstunden);
        printf("%s",schueler[index].name);
    }
    return 0;
}
*/



#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i;
    for(i=1;i<10;i++)
    {
        if((i%3)==0)
        {
            continue;
        }
        switch(i)
        {
            case 8:
                printf("acht\n");
                break;

            case 6:
                printf("sechs\n");
            
            default:
                printf("%d\n",i);

        }
    }
    return 0;
}
