#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <conio.h>

void sPW(double r1, double r2, double *rs, double *rp);
double input(void);

int main()
{
    double w1=0, w2=0, sw=0, pw=0;

    w1=input();
    w2=input();
    sPW(w1,w2,&sw,&pw);

    printf("Rs: %lf [Ohm]\t Rp: %lf [Ohm]",sw,pw);
    return EXIT_SUCCESS;
}

void sPW(double r1, double r2, double *rs, double *rp)
{
    *rs = r1+r2;
    *rp=r1*r2/(r1+r2);
    return;
}

double input(void)
{
    double r=0;
    
    printf("Wiederstandswert: ");
    scanf("%lf",&r);
    return r;
}