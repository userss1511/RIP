#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Skalarni prozivod
    double x1, y1, z1, x2, y2, z2;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &z1, &x2, &y2, &z2);


    double skalarni = x1 * x2 + y1 * y2 + z1 * z2;
    printf("%f\n", skalarni);

    return 0;
}
