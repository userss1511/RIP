#include <stdio.h>
#include <stdlib.h>

int main()
{
    int br = 1;
    int sumaOcjena = 0;

    while(br <= 10) {
        int ocjena;
        scanf("%d", &ocjena);
        sumaOcjena = sumaOcjena + ocjena;
        br = br + 1;
    }
    // double prosjek = (double) sumaOcjena / 10;
    double prosjek = sumaOcjena / 10.0;
    printf("%.2f\n", prosjek);
    return 0;
}
