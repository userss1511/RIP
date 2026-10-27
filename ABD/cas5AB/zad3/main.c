#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    int zbirOcjena = 0;

    while(i <= 10) {
        int ocjena;
        scanf("%d", &ocjena);
        zbirOcjena = zbirOcjena + ocjena;
        i = i + 1;
    }

    // double prosjek = (double) zbirOcjena / 10;
    double prosjek = zbirOcjena / 10.0;
    printf("%.2f", prosjek);

    return 0;
}
