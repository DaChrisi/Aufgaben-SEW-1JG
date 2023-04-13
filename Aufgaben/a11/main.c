//0x110
//28.02.2022

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <conioex.h>

//Functions
char encryptCaesar(char plainChar, int key);
char encryptAtbash(char plainChar);
void encryptRot13(char plainChar,char *cipherChar);
int chartoint(char plainChar);

int main()
{
    //Var
    int key=5;
    int i=2, j=2, k=2;
    int i2=4, j2=6, k2=8;
    char plainChar=0, rot=0;

    system("cls");
    printf(" Text to Caesar,Atbash,Rot13");
    gotoxy(i,i2);
    do
    {
        plainChar=getch();
        chartoint(plainChar);
        //Sets Max length to 170
        if (i!=170||j!=170||k!=170)
        {
            gotoxy(i,i2);
            textcolor(RED);
            printf("%c",encryptCaesar(plainChar,key));
            i++;
            gotoxy(j,j2);
            textcolor(GREEN);
            printf("%c",encryptAtbash(plainChar));
            j++;
            gotoxy(k,k2);
            textcolor(BLUE);
            encryptRot13(plainChar,&rot);
            printf("%c",rot);
            k++;
        }
    } while (plainChar!=13);
    
    
    return EXIT_SUCCESS;
}

//Encrypts Caeser Code
char encryptCaesar(char plainChar, int key)
{
    int res=0, tempkey=0;
    res=plainChar+key;
    if (res>122)
    {
        tempkey=res-122;
        res=96+tempkey;
    }
    return res;
}

//Encrypts Bash Code
char encryptAtbash(char plainChar)
{
    int res=0;

    res=122-(plainChar-97);
    return res;
}

//Encrypts Rot13 Code
void encryptRot13(char plainChar,char *cipherChar)
{
    int res=0, tempkey=0, key=13;
    res=plainChar+key;
    if (res>122)
    {
        tempkey=res-122;
        res=96+tempkey;
    }
    *cipherChar = res;
}

//Turns an Cahr into an Integer
int chartoint(char plainChar)
{
    return (int)plainChar;
}

