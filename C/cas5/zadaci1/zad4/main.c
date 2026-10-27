#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // koliko broj ima cifara
    int n;
    scanf("%d", &n);
    int brCif = 0;
    int n1 = n, n2 = n;
    int noviBroj = 0;

    while(n > 0) {
        int cif = n % 10;
        brCif++;
        n = n / 10;
    }

    while(n1 > 0) {
        int cif = n1 % 10;
        noviBroj = noviBroj + pow(cif, brCif);
        n1 = n1 / 10;
    }

    if(n2 == noviBroj) {
        printf("Broj je Armstrongov!\n");
    }
    else {
        printf("Broj nije Armstrongov!\n");
    }
    // printf("%d\n", brCif);
    // printf("%d\n", n);

    return 0;
}
