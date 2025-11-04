#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    //Za zadate koeficijente a, b, c riješiti kvadratnu jednačinu.
    int a = 2;
    int b = 3;
    int c = 0;

    int d = pow(b, 2) - 4*a*c;
    double korijenD = sqrt(d);
    double x1 = (-b + korijenD)/(2*a);
    double x2 = (-b - korijenD)/(2*a);

    printf("%f %f\n", x1, x2);


    return 0;
}
