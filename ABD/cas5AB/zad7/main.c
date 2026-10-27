#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    // int minCif = INT_MAX;
    // int maxCif = INT_MIN;
    //printf("%d %d\n", minCif, maxCif);
    int minCif = 10;
    int maxCif = -1;

    while(n > 0) {
        int cif = n % 10;
        if(minCif > cif) {
            minCif = cif;
        }
        if(maxCif < cif) {
            maxCif = cif;
        }
        n = n / 10;
    }

    printf("Minimum: %d\n", minCif);
    printf("Maksimum: %d\n", maxCif);
    return 0;
}
