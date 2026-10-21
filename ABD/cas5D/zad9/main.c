#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);

    int brCif = 0;
    int n1 = n;
    int n2 = n;

    int noviBr = 0;

    // petlja za izracunavanje broja cifara
    while(n > 0) {
        brCif = brCif + 1;
        n = n / 10;
    }

    while(n1 > 0) {
        int cif = n1 % 10;
        noviBr = noviBr + pow(cif, brCif);
        n1 = n1 / 10;
    }

    if(noviBr == n2) {
        printf("Broj je Armstrongov!\n");
    }
    else {
        printf("Broj nije Armstrongov!\n");
    }

    return 0;
}
