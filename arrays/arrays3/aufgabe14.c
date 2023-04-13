#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define MAXLENGTH 60
#define MIN 'A'
#define MAX 'Z'

int generateRandomStrings(char str1[],int n);

int main()
{
    char zk1[MAXLENGTH]={0};
    char zk2[MAXLENGTH]={0};
    long lenzk1=0, lenzk2=0;
    int i=0,j=0;
    char hilf=0;

    srand(time(NULL));
    /*printf("Zeichenkette 1 eingeben:  ");
    //String einlesen
    gets(zk1);
    printf("Zeichenkette 2 eingeben:  ");
    gets(zk2);

    */
    generateRandomStrings(zk1,5);
    generateRandomStrings(zk2,5);

    lenzk1=strlen(zk1);
    lenzk2=strlen(zk2);

    printf("%s\n%s\n",zk1,zk2);

    if(lenzk1!=lenzk2){
        printf("keine Permutation\n");
    }
    else{
        for(i=0;i<lenzk1;i++){
            for(j=0;j<lenzk1-1;j++){
                if(zk1[j]>zk1[j+1]){
                    hilf=zk1[j];
                    zk1[j]=zk1[j+1];
                    zk1[j+1]=hilf;
                }
            }
        }
        printf("%s\n%s\n",zk1,zk2);



    }

    return EXIT_SUCCESS;
}

int generateRandomStrings(char str1[],int n){
    int i=0;
    if(n>59){
        return EXIT_FAILURE;
    }
    for(i=0;i<n;i++){
        str1[i]=rand()%(MAX-MIN+1)+MIN;
    }
    str1[i]='\0';  //str1[i]=0;
    return EXIT_SUCCESS;
}
