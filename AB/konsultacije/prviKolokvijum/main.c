#include <stdio.h>
#include <stdlib.h>

int main()
{
     double x, y, r, cx, cy;

    scanf("%lf %lf %lf %lf %lf", &x, &y, &r, &cx, &cy);

    double dist2 = (x - cx) * (x - cx) + (y - cy) * (y - cy);
    double r2 = r * r;

    if (dist2 <= r2)
        printf("Tacka pripada krugu.\n");
    else
        printf("Tacka ne pripada krugu.\n");
    return 0;
}
