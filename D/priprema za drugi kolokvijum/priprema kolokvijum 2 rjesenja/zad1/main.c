#include <stdio.h>
#include <stdlib.h>


int zad1(int niz[], int n) {
    int count = 0;

    for (int i = 0; i < n - 1; i++) {
        if (niz[i] % 10 == 0 && niz[i + 1] % 10 == 0) {
            count++;
        }
    }

    return count;
}
int main()
{
    int n;
    scanf("%d", &n);
    int niz[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &niz[i]);
    }

    int rezultat = zad1(niz, n);
    printf("%d\n", rezultat);
    return 0;
}
