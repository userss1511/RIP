#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Napisati program koji računa zbir brojeva oblika 2^2 + 2^3 + ... + 2^n, za zadato n bez korišćenja funkcije pow.
    int n;
    int suma = 0;
    int stepen = 4;
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        suma += stepen;
        stepen *= 2;
    }

    printf("Zbir je: %d\n", suma);

    return 0;
}
