#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, y, cx, cy, r;
    scanf("%lf %lf %lf %lf %lf", &x, &y, &cx, &cy, &r);

    if((x-cx)*(x-cx) + (y-cy)*(y-cy) <= r*r) {
        printf("Tacka (%.2f, %.2f) pripada krugu!\n", x, y);
    }
    else {
        printf("Tacka (%.2f, %.2f) ne pripada krugu!\n", x, y);
    }

    // rjesenje uz pomoc ternarnog operatora
    printf((x-cx)*(x-cx) + (y-cy)*(y-cy) <= r*r ? "Tacka pripada krugu!\n" : "Tacka ne pripada krugu!\n");
    return 0;
}
