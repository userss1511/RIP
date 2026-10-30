#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, y, a;
    scanf("%lf %lf %lf", &x, &y, &a);

    double xl = x - a / 2;
    double xd = x + a / 2;
    double yg = y + a / 2;
    double yd = y - a / 2;

    printf("Tjeme1: (%.2f, %.2f)\n", xl, yd);
    printf("Tjeme2: (%.2f, %.2f)\n", xd, yd);
    printf("Tjeme3: (%.2f, %.2f)\n", xd, yg);
    printf("Tjeme4: (%.2f, %.2f)\n", xl, yg);
    return 0;
}
