#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, y, cx, cy, r;
    scanf("%lf %lf %lf %lf %lf", &x, &y, &cx, &cy, &r);

    if((x-cx)*(x-cx) + (y-cy)*(y-cy) <= r*r) {
        printf("Tacka pripada krugu!\n");
    }
    else {
        printf("Tacka ne pripada krugu!\n");
    }
    return 0;
}
