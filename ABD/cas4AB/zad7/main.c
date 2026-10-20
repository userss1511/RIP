#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    // double D = b*b - 4*a*c;
    double D = pow(b, 2) - 4*a*c;

    if(D < 0) {
        printf("Nemamo realna rjesenja\n");
    }
    else if(D == 0) {
        double x = -b / (2*a);
        printf("x = %.2f\n", x);
    }
    else { // D > 0
        double x1 = (-b - sqrt(D)) / (2*a);
        double x2 = (-b + sqrt(D)) / (2*a);
        printf("x1 = %.2f  x2 = %.2f\n", x1, x2);
    }
    return 0;
}
