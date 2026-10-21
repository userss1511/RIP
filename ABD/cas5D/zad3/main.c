#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    int sumaOcjena = 0;

    while(i <= 10) {
        int ocjena;
        scanf("%d", &ocjena);
        sumaOcjena = sumaOcjena + ocjena;
        i = i + 1;
    }

    // printf("%d\n", sumaOcjena);
    //  double prosjecnaOcjena = (double) sumaOcjena / 10;
    double prosjecnaOcjena = sumaOcjena / 10.0;
    // int / int -> / operator ponasa kao div
    printf("%.2f\n", prosjecnaOcjena);

    return 0;
}
