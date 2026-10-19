#include <stdio.h>
#include <stdlib.h>

int main()
{
    double C;
    scanf("%lf", &C);

    double F = C*1.8 + 32;
    printf("%.1f\n", F);

    // da smo imali F, a treba da izracunamo C
    // C = (F - 32) / 1.8

    return 0;
}
