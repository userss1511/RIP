#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    // double d = b*b - 4*a*c;
    double d = pow(b, 2) - 4*a*c;  // pow funkcija za stepenovanje
    if(d < 0) {
        printf("Rjesenja kvadrane jednacine su kompleksni brojevi\n");
    }
    else if(d == 0){
        double x = (double) (-1)*b / 2*a;
        printf("x = %f\n", x);
    }
    else { // (d > 0)
        double x1 = (double) ((-1)*b - sqrt(d)) / (2*a);
        double x2 = (double) ((-1)*b + sqrt(d)) / (2*a);
        printf("x1 = %f\n", x1);
        printf("x2 = %f\n", x2);
    }
    return 0;
}
