#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>

long myPow(long base, long exponent);

int main()
{
    long b=5,e=3,res=0;

    res=myPow(b,e);
    printf("result: %ld\n",res);


    return EXIT_SUCCESS;
}

long myPow(long base, long exponent)
{
    int i=0;
    long result=1;
    for(i=1;i<=exponent;i++)
    {
        result=result*base;
    }
    return result;
}