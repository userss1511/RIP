#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    //double D = b*b - 4*a*c;
    double D = pow(b, 2) - 4*a*c;
    // pow funkcija za stepenovanje

    if(D < 0) {
        printf("Jednacina nema realna rjesenja.\n");
    }
    else if(D == 0) {
        double x = -b / (2*a);
        printf("Rjesenje kvadratne jednacine je x = %f\n", x);
    }
    else { // D > 0
        double x1 = (-b - sqrt(D)) / (2*a);
        double x2 = (-b + sqrt(D)) / (2*a);
        printf("Rjesenja kvadratne jednacine su x1 = %f i x2 = %f\n", x1, x2);
    }

    return 0;
}
