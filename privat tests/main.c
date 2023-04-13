

#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *fp;

    fp=fopen("test.txt", "w");
    if(fp == NULL)
    {
        exit(-1);
    }
    fprintf(fp, "Hallo das ist ein Text\n");
    fclose(fp);

    return EXIT_SUCCESS;
}