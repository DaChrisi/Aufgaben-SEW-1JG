#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <math.h>
#include <conioex.h>
#include <string.h>
#include <ctype.h>

struct team{
    char verein[101];
    int siege, ue, nl, punkte;
    char tordiff[8];
};

int main()
{
    struct team lmvw;

    strcpy(lmvw.verein,"Chelsea FC");
    lmvw.siege=21;
    lmvw.ue=11;
    lmvw.nl=6;
    lmvw.punkte=lmvw.siege*3+lmvw.ue;
    strcpy(lmvw.tordiff,"76:33");

    printf("%ld\n",sizeof(lmvw));
    return EXIT_SUCCESS;
}