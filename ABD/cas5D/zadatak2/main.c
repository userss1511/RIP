#include <stdio.h>
#include <stdlib.h>

int main()
{
    double C;
    scanf("%lf", &C);

    double F = 1.8*C + 32;
    printf("%.2f", F);

    // C = (F - 32) / 1.8;

    return 0;
}
