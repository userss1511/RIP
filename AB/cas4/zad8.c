#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#include <math.h>
int main()
{
    //Za dati poluprečnik r, izračunati i ispisati površinu i obim kruga.
    double r = 3;
    double povrsina = pow(r, 2)*PI;
    double obim = 2*r*PI;

    printf("Povrsina: %f\n", povrsina);
    printf("Obim: %f\n", obim);


    return 0;
}
