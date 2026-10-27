#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);
    int minCif = 10;
    int maxCif = -1;
    // int minCif = INT_MAX;
    // int maxCif = INT_MIN;

    while(n > 0) {
        int cif = n % 10;
        if(minCif > cif) {
            minCif = cif;
        }
        if(maxCif < cif){
            maxCif = cif;
        }
        n = n / 10;
    }

    printf("Najmanja cifra je: %d\n", minCif);
    printf("Najveca cifra je: %d\n", maxCif);
    return 0;
}
