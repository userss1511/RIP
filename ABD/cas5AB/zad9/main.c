#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // naci broj cifara broja n
    int n;
    scanf("%d", &n);
    int brCif = 0;
    int n1 = n, n2 = n;
    int noviBr = 0;

    while(n > 0) {
        brCif = brCif + 1;
        n = n / 10;
    }

    while(n1 > 0) {
        int cif = n1 % 10;
        noviBr = noviBr + pow(cif, brCif);
        n1 = n1 / 10;
    }

    if(n2 == noviBr) {
        printf("Broj je Armstrongov!\n");
    }
    else {
        printf("Broj nije Armstronogov!\n");
    }

    // printf("%d\n", n);
    return 0;
}
