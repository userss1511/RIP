#include <stdio.h>
#include <stdlib.h>

int main()
{
    double c;
    // printf("Unesite temeperaturu: \n");
    scanf("%lf", &c);

    double f = c*1.8 + 32;
    printf("%.2f\n", f);
    return 0;
}
