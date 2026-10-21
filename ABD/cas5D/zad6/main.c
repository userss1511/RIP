#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sumaCif = 0;

    while(n > 0) { // mijenja se originalna vrijednost broja n
        int cif = n % 10;
        sumaCif = sumaCif + cif;
        n = n / 10;
    }

    printf("Zbir cifara broja n je %d.\n", sumaCif);
    return 0;
}
