#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14

int main()
{
    double r;
    scanf("%lf", &r);

    double obim = 2*r*pi;
    double povrsina = pow(r,2)*pi;

    printf("Obim je %.2f\n", obim);
    printf("Povrsina je %.2f\n", povrsina);

    return 0;
}
