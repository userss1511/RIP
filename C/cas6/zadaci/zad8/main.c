#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, y, a;
    scanf("%lf %lf %lf", &x, &y, &a);
    double xLijevo = x - a / 2;
    double xDesno = x + a / 2;
    double yDolje = y - a / 2;
    double yGore = y + a / 2;

    printf("Tjeme A(%.2f, %.2f)\n", xLijevo, yDolje);
    printf("Tjeme B(%.2f, %.2f)\n", xDesno, yDolje);
    printf("Tjeme C(%.2f, %.2f)\n", xDesno, yGore);
    printf("Tjeme D(%.2f, %.2f)\n", xLijevo, yGore);

    return 0;
}
